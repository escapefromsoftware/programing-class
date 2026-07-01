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

void print_map(){
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

int main(){
    read_map();
    print_map();
    return 0;
}
