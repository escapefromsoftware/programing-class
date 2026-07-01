#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define W 12
#define H 10

char map[H][W];

void read_map(){
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

void maze1(int x, int y, char his[H][W]){
    char newhis [H][W];
    memcpy(newhis, his, H*W);
    if(his[y][x] == '0'){
        printf("(%d, %d)\n", x, y);
        newhis[y][x] = '1';
        maze1(x, y-1, newhis);
        maze1(x+1, y, newhis);
        maze1(x, y+1, newhis);
        maze1(x-1, y, newhis);
    } else if(his[y][x] == '1'){
        printf("(%d, %d)X\n", x, y);
    } else if(his[y][x] == '2'){
        printf("(%d, %d)OK\n", x, y);
        exit(0);
    }
}

int main(){
    read_map();
    static char his[H][W];
    memcpy(his, map, H*W);
    maze1(1, 1, his);
    return 0;
}