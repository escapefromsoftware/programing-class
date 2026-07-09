#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define W 12
#define H 10

char map[H][W];
int hp = 10;
int mp = 5;

void read_map(){
    FILE *fp;
    int ch;
    int cnt = 0;
    fp = fopen("No5_HWE_map.txt", "rt");

    if(fp == NULL){
        perror("ファイルを開けない\n");
        exit(1);
    }

    for (int y = 0; y < H; y++) {
        for (int x = 0; x < W; x++) {
            ch = fgetc(fp);

            if (ch == EOF) {
                perror("データを読み込めない.");
                fclose(fp);
                exit(1);
            }
            if(ch == '\n'){
                x--;
            } else if(ch == ' '){
                map[y][x] = '0';
                cnt++;
            } else if(ch == '#'){
                map[y][x] = '1';
                cnt++;
            } else if(ch == 'G'){
                map[y][x] = '2';
                cnt++;
            } else if(ch == 'K'){
                map[y][x] = '3';
                cnt++;
            }else if (ch == 'D'){
                map[y][x] = '4';
                cnt++;
            }else{
                printf("不正なデータ.(%d, %d) %d %c\n", y, x, ch, ch);
                x--;
            }
        }
    }
    fclose(fp);
}

void print_mini_map(int x, int y){
    for(int i = y-1; i <= y+1; i++){
        for(int j = x-1; j <= x+1; j++){
            if(i < 0 || i >= H || j < 0 || j >= W){
                printf(" ");
            } else if(i == y && j == x){
                printf("O");
            } else{
                if(map[i][j] == '0'){
                    printf(" ");
                } else if(map[i][j] == '1'){
                    printf("#");
                } else if(map[i][j] == '2'){
                    printf("G");
                } else if(map[i][j] == '3'){
                    printf("K");
                } else if(map[i][j] == '4'){
                    printf("D");
                }
            }
        }
        printf("\n");
    }
    printf("HP=%d MP=%d\n", hp, mp);
}

int main(){
    int x, y;
    char ip;
    bool has_key = false;
    read_map();
    printf("座標1,1からのスタートです。\n");
    x = 1;
    y = 1;
    print_mini_map(x, y);

    while(1){
        printf("上w, 左a, 右d, 下s, 回復h, 読込l, 保存kのいずれかを入力してください。\n");
        if(scanf(" %c", &ip) != 1 || ip == -1){
            break;
        }
        if(ip != 'w' && ip != 'a' && ip != 'd' && ip != 's' && ip != 'h' && ip != 'l' && ip != 'k'){
            printf("不正な入力です。\n");
            continue;
        }

        switch(ip){
            case 'w':
                y--;
                hp--;
                print_mini_map(x, y);
                if(map[y][x] == '2'){
                    printf("ゴールに到達しました。\n");
                    exit(0);
                }
                else if(map[y][x] == '1'){
                    printf("そこは通れません\n");
                    y++;
                }
                else if(map[y][x] == '3'){
                    printf("鍵を手に入れました。\n");
                    has_key = true;
                    map[y][x] = '0';
                }
                else if(map[y][x] == '4'){
                    if(has_key){
                        printf("扉を開けました。\n");
                        map[y][x] = '0';
                        has_key = false;
                    }else{
                        printf("扉は閉まっています。\n");
                        y++;
                    }
                }
                break;
            case 'd':
                x++;
                hp--;
                print_mini_map(x, y);
                if(map[y][x] == '2'){
                    printf("ゴールに到達しました。\n");
                    exit(0);
                }
                else if(map[y][x] == '1'){
                    printf("そこは通れません\n");
                    x--;
                }
                else if(map[y][x] == '3'){
                    printf("鍵を手に入れました。\n");
                    map[y][x] = '0';
                    has_key = true;
                }
                else if(map[y][x] == '4'){
                    if(has_key){
                        printf("扉を開けました。\n");
                        map[y][x] = '0';
                        has_key = false;
                    }else{
                        printf("扉は閉まっています。\n");
                        x--;
                    }
                }
                break;
            case 's':
                y++;
                hp--;
                print_mini_map(x, y);
                if(map[y][x] == '2'){
                    printf("ゴールに到達しました。\n");
                    exit(0);
                }
                else if(map[y][x] == '1'){
                    printf("そこは通れません\n");
                    y--;
                }
                else if(map[y][x] == '3'){
                    printf("鍵を手に入れました。\n");
                    map[y][x] = '0';
                    has_key = true;
                }
                else if(map[y][x] == '4'){
                    if(has_key){
                        printf("扉を開けました。\n");
                        map[y][x] = '0';
                        has_key = false;
                    }else{
                        printf("扉は閉まっています。\n");
                        y--;
                    }
                }
                break;
            case 'a':
                x--;
                hp--;
                print_mini_map(x, y);
                if(map[y][x] == '2'){
                    printf("ゴールに到達しました。\n");
                    exit(0);
                }
                else if(map[y][x] == '1'){
                    printf("そこは通れません\n");
                    x++;
                }
                else if(map[y][x] == '3'){
                    printf("鍵を手に入れました。\n");
                    map[y][x] = '0';
                    has_key = true;
                }
                else if(map[y][x] == '4'){
                    if(has_key){
                        printf("扉を開けました。\n");
                        map[y][x] = '0';
                        has_key = false;
                    }else{
                        printf("扉は閉まっています。\n");
                        x++;
                    }
                }
                break;
            case 'k': {
                FILE *fp;
                fp = fopen("No5_HWE_data.txt", "w");
                if(fp == NULL){
                    perror("ファイルを開けない\n");
                    exit(1);
                }else{
                    fprintf(fp, "X=%d\nY=%d\nHP=%d\nMP=%d\nK=%d\n", x, y, hp, mp, has_key);
                    fclose(fp);
                    printf("保存しました。\n");
                }
                break;
            }

            case 'l': {
                FILE *fp2;
                int key;
                fp2 = fopen("No5_HWE_data.txt", "r");
                if(fp2 == NULL){
                    perror("ファイルを開けない\n");
                    exit(1);
                }else{
                    if(fscanf(fp2, "X=%d\nY=%d\nHP=%d\nMP=%d\nK=%d\n", &x, &y, &hp, &mp, &key) == 5){
                        has_key = key;
                    }else{
                        printf("データを読み込めません。\n");
                    }
                    fclose(fp2);
                    printf("読み込みました。\n");
                }
                break;
            }

            case 'h':
                if(mp <= 0){
                    printf("MPが足りません。\n");
                    break;
                }
                hp = 10;
                mp--;
                printf("回復しました。\n");
                break;

            default:
                printf("入力がおかしい\n");
            }
        if(hp <= 0){
            printf("HPが0になりました。ゲームオーバーです。\n");
            break;
        }
    }
    return 0;
}
    
