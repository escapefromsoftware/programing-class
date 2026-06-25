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
void maze0(int x,int y, int depth){
    if(map[x][y] == 0){
        for(int i = 0; i < depth*2; i++){
            printf(" ");
        }
        printf("(%d, %d)\n",x,y);
    }
    else if(map[x][y] == 1){
        for(int i = 0; i < depth*2; i++){
            printf(" ");
        }
        printf("(%d, %d)X\n",x,y);
    }
    else if(map[x][y] == 2){
        for(int i = 0; i < depth*2; i++){
            printf(" ");
        }
        printf("(%d, %d)OK\n",x,y);
    }
}

int main(){
    int x,y;
    int depth = 2;
    scanf("%d",&x);
    scanf("%d",&y);
    maze0(x,y,depth);
    return 0;
}
