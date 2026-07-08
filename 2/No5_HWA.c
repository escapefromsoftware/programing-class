#include<stdio.h>
#include<stdlib.h>
#define W 12
#define H 10

char map[H][W] ;

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
                map[y][x] = ' ';
                cnt++;
            } else if(ch == '#'){
                map[y][x] = '#';
                cnt++;
            } else if(ch == 'G'){
                map[y][x] = 'G';
                cnt++;
            } else{
                printf("不正なデータ.(%d, %d) %d %c\n", y, x, ch, ch);
                x--;
            }
        }
    }
    fclose(fp);
}

void print_map(void){
    for(int i = 0; i < H; i++){
        for(int j = 0; j < W; j++){
            printf("%c", map[i][j]);
        }
        printf("\n");
    }
}

int main(void){
    read_map();
    print_map();
    return 0;
}