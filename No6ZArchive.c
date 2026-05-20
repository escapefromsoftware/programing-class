#include<stdio.h>

int n;
int num[20] = {};
int main(){
    printf("”—ñ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B—áF1 2 3 4...:");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&num[0],&num[1],&num[2],&num[3],&num[4],&num[5],&num[6],&num[7],&num[8],&num[9],&num[10],&num[11],&num[12],&num[13],&num[14],&num[15],&num[16],&num[17],&num[18],&num[19]);
    
    for (int i = 19; i >= 0; i--)
    {
        if(num[i] == 0){
            printf("");
        }
        else{
            printf("%d ",num[i]);
        }
    }
    
}

