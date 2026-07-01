#include <stdio.h>
#include <stdlib.h>

void read_map(){
    FILE *fp;
    int ch;
    fp = fopen("No4_HW1map.txt", "rt");

    if(fp == NULL){
        perror("ファイルを開けません\n");
        exit(1);
    }

    ch = fgetc(fp);
    while(ch != -1){
        printf("%c", ch);
        ch = fgetc(fp);
        
    }
    fclose(fp);
}

int main(){
    read_map();
    return 0;
}