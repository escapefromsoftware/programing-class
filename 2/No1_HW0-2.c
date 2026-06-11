#include <stdio.h>

void piyo(int a){
    if(a >= 0){
        for(int i = 1; i <= a; i++){
            printf("%d\n", i);
        }
    }
    else{
        printf("Error\n");
    }
}

int main(){
    piyo(5);
    piyo(-3);
    piyo(6);
    return 0;
}