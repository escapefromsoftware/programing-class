#include<stdio.h>
#include <stdlib.h>
#define W 8
#define H 6

//このファイルはあまり関係ないです

static char map[H][W]={
	{1,1,1,1,1,1,1,1},
	{1,0,0,0,1,1,1,1},
	{1,1,0,1,0,0,0,1},
	{1,0,0,1,0,1,0,1},
	{1,1,0,0,0,1,2,1},
	{1,1,1,1,1,1,1,1},
};

void maze1(int x, int y, int depth){
    if(map[x][y] == 0){
        for(int i = 0; i < depth*2; i++){
            printf(" ");
        }
        printf("(%d, %d)\n",x,y);
        maze1(x+1, y, depth+1);
        maze1(x, y+1, depth+1);
    }
    
    if(map[x][y] == 1){
        for(int i = 0; i < depth*2; i++){
            printf(" ");
        }
        printf("(%d, %d)X\n",x,y);
    }

    if(map[x][y] == 2){
        for(int i = 0; i < depth*2; i++){
            printf(" ");
        }
        printf("(%d, %d)OK\n",x,y);
        exit(0);
    }
}

int main(){
    maze1(1,1,0);
    return 0;
}