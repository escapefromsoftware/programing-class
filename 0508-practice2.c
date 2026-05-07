#include<stdio.h>

void main(){
    int a=1;

    while (a<=100)
    {
        if(a % 15 == 0){
            printf("Fizz Buzz\n");
        }
        if(a % 5 == 0){
            printf("Buzz\n");
        }
        if(a % 3 ==0){
            printf("Fizz\n");
        }
        else{
            printf("%d\n",a);
        }
        a++ ;
    }
    
}