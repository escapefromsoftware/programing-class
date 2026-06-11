#include<stdio.h>

int is_uruu(int year){
    if(year % 400 == 0){
        return 1;
    }
    else if(year % 100 == 0){
        return 0;
    }
    else if(year % 4 == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int year;
    printf("年を入力してください:\n");
    scanf("%d", &year);
    if(is_uruu(year) == 1){
        printf("%dはうるう年です\n", year);
    }
    else{
        printf("%dはうるう年ではありません\n", year);
    }
}