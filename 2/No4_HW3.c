#include<stdio.h>
#include<stdlib.h>
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

void maze0(int x, int y){
    if(map[y][x] == '0'){
        printf("(%d, %d)\n", x, y);
        maze0(x, y-1);
        maze0(x+1, y);
        maze0(x, y+1);
        maze0(x-1, y);
    } else if(map[y][x] == '1'){
        printf("(%d, %d)X\n", x, y);
    } else if(map[y][x] == '2'){
        printf("(%d, %d)OK\n", x, y);
        exit(0);
    }
}

int main(){
    read_map();
    maze0(1, 1);
    return 0;
}

//動かないらしいのでこれでいいや