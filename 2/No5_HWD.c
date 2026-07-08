#include<stdio.h>
#include<stdlib.h>
#define W 12
#define H 10

char map[H][W];

void read_map(){
    FILE *fp;
    int ch;
    int cnt = 0;
    fp = fopen("map.txt", "rt");

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
            } else{
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
                }
            }
        }
        printf("\n");
    }
}

int main(){
    int x, y;
    int ip;
    read_map();
    while(scanf("%d %d", &x, &y) && (x != -1 && y != -1)){
        if(x < 0 || x >= W || y < 0 || y >= H){
            printf("座標が範囲外です。\n");
            continue;
        }
        else{
            print_mini_map(x, y);
            break;
        }
    }

    while(1){
        printf("上8, 左4, 右6, 下2, 読込0, 保存1のいずれかを入力してください。\n");
        if(scanf("%d", &ip) != 1 || ip == -1){
            break;
        }
        if(ip != 8 && ip != 6 && ip != 2 && ip != 4 && ip != 1 && ip != 0){
            printf("不正な入力です。\n");
            continue;
        }

        switch(ip){
            case 8:
                y--;
                print_mini_map(x, y);
                if(map[y][x] == '2'){
                    printf("ゴールに到達しました。\n");
                    exit(0);
                }
                else if(map[y][x] == '1'){
                    printf("そこは通れません\n");
                    y++;
                }
                break;
            case 6:
                x++;
                print_mini_map(x, y);
                if(map[y][x] == '2'){
                    printf("ゴールに到達しました。\n");
                    exit(0);
                }
                else if(map[y][x] == '1'){
                    printf("そこは通れません\n");
                    x--;
                }
                break;
            case 2:
                y++;
                print_mini_map(x, y);
                if(map[y][x] == '2'){
                    printf("ゴールに到達しました。\n");
                    exit(0);
                }
                else if(map[y][x] == '1'){
                    printf("そこは通れません\n");
                    y--;
                }
                break;
            case 4:
                x--;
                print_mini_map(x, y);
                if(map[y][x] == '2'){
                    printf("ゴールに到達しました。\n");
                    exit(0);
                }
                else if(map[y][x] == '1'){
                    printf("そこは通れません\n");
                    x++;
                }
                break;
            case 1:
                FILE *fp;
                fp = fopen("data.txt", "w");
                if(fp == NULL){
                    perror("ファイルを開けない\n");
                    exit(1);
                }else{
                    fprintf(fp, "X=%d\nY=%d\n", x, y);
                    fclose(fp);
                    printf("保存しました。\n");
                }
                break;

            case 0:
                FILE *fp2;
                fp2 = fopen("data.txt", "r");
                if(fp2 == NULL){
                    perror("ファイルを開けない\n");
                    exit(1);
                }else{
                    fscanf(fp2, "X=%d\nY=%d\n", &x, &y);
                    fclose(fp2);
                    printf("読み込みました。\n");
                }
                break;

            default:
                printf("入力がおかしい\n");
            }
    }
    return 0;
}
    
