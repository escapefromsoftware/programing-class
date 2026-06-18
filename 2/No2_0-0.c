#include<stdio.h>

int func2(){
    printf("func2\n");
    return 0;
}

int func1(){
    printf("func1A\n");
    func2();
    printf("func1B\n");
    return 0;
}

int func0(){
    printf("func0A\n");
    func1();
    printf("func0B\n");
    return 0;
}

int main(){
    func0();
    return 0;
}