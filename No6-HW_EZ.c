#include<stdio.h>

int count = 0;
int main(){

    int score[10] = {0};

    for (int i = 0; i < 10 ;i++){
        printf("%d l–Ú‚Ì“_”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:",i+1);
        scanf("%d",&score[i]);
    }

    printf("‡ŠiÒ‚Í");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                if(score[j] > score[k]){
                    count++;
                }
                else{
                    continue;
                }
                
            }
            if(count >= 9){
                printf("%dl–Ú ",j+1);
                score[j] = -1;
                count = 0;
                break;
            }
            else{
                count = 0;
            }
            
        }
    }

return 0;
}

