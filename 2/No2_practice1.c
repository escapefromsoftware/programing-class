#include<stdio.h>

int hl_pr(){
    printf("hello, start");
    hl_pr();
    printf("hello, end");
}

int main(){
    hl_pr();
}