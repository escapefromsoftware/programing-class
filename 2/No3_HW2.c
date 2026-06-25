#include<stdio.h>
#define W 8
#define H 6


static char map[H][W]={
	{1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,1},
	{1,0,1,1,1,0,1,1},
	{1,0,0,0,0,1,0,1},
	{1,0,0,1,0,0,2,1},
	{1,1,1,1,1,1,1,1},
};

void print_map(){
    for(int i = 0; i < H; i++){
        for (int j = 0; j < W; j++){
            if(map[i][j] == 0){
                printf(" ");
            }
            if(map[i][j] == 1){
                printf("#");
            }
            if(map[i][j] == 2){
                printf("G");
            }

            if(j == W-1){
                printf("\n");
            }
        }
    }
}

int main(){
    print_map();
    return 0;
}