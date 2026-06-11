#include<stdio.h>

int add(){
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum = sum + i;
    }
    return sum;
}

int main(){
    int x = add();
    printf("%d\n", x);
    return 0;
}