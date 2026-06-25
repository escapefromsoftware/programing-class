#include<stdio.h>
#define W 8
#define H 6

int main(){
    static map[H][W]={//Hは行,Wは列
	{1,1,1,1,1,1,1,1},
	{1,0,0,0,0,0,0,1},
	{1,0,1,1,1,0,1,1},
	{1,0,0,0,0,1,0,1},
	{1,0,0,1,0,0,2,1},
	{1,1,1,1,1,1,1,1},
};

for(int i = 0; i < H;i++){
    for (int j = 0; j < W; j++){
        if(map[i][j] == 0){
            printf(" ");
        }
        else if(map[i][j] == 1){
            printf("#");
        }
        else if(map[i][j] == 2){
            printf("G");
        }

        if(j == W-1){
            printf("\n");
        }
    }
}
return 0;
}