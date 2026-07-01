#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define W 12
#define H 10

char map[H][W];

void print_map(void);

void read_map(void){
    FILE *fp;
    int ch;
    int cnt = 0;
    fp = fopen("No4_HW1map.txt", "rt");

    if(fp == NULL){
        perror("ファイルを開けません\n");
        exit(1);
    }

    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            ch = fgetc(fp);
            if(ch == '\n'){
                j--;
            } else if(ch == ' '){
                map[i][j] = '0';
                cnt++;
            } else if(ch == '#'){
                map[i][j] = '1';
                cnt++;
            } else if(ch == 'G'){
                map[i][j] = '2';
                cnt++;
            } else{
                printf("不正なデータ.(%d, %d) %d %c\n", i, j, ch, ch);
                j--;
            }
        }
    }
    if(cnt < W * H){
        printf("mapが足りない\n");
    }
    fclose(fp);
}

void maze2(int x, int y, char his[H][W]){
    char newhis [H][W];
    memcpy(newhis, his, H*W);
    if(his[y][x] == '0'){
        printf("(%d, %d)\n", x, y);
        newhis[y][x] = '1';
        map[y][x] = '3';
        maze2(x, y-1, newhis);
        maze2(x+1, y, newhis);
        maze2(x, y+1, newhis);
        maze2(x-1, y, newhis);
    } else if(his[y][x] == '1'){
        printf("(%d, %d)X\n", x, y);
    } else if(his[y][x] == '2'){
        printf("(%d, %d)OK\n", x, y);
        print_map();
        exit(0);
    }
}

void print_map(void){
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            if(map[i][j] == '0'){
                printf(" ");
            } else if(map[i][j] == '1'){
                printf("#");
            } else if(map[i][j] == '2'){
                printf("G");
            } 
            else if(map[i][j] == '3'){
                printf(".");
            }
            else if(map[i][j] == '\n'){
                continue;
            }else{
                printf("不正なデータ.(%d, %d) %c\n", i, j, map[i][j]);
            }
        }
        printf("\n");
    }
}

int main(void){
    read_map();
    static char his[H][W];
    memcpy(his, map, H*W);
    maze2(1, 1, his);
    return 0;
}
