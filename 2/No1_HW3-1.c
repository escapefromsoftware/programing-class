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

int maxday_of_month(int month, int year){
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        return 31;
    }
    else if(month == 4 || month == 6 || month == 9 || month == 11){
        return 30;
    }
    else if(month == 2){
        if(is_uruu(year) == 1){
            return 29;
        }
        else{
            return 28;
        }
    }
    else{
        return -1;
    }
}

int main(){
    int month, year;
    printf("月と年を入力してください:\n");
    scanf("%d %d", &month, &year);
    if(maxday_of_month(month, year) == -1){
        printf("エラー：不正な月です\n");
    }
    else{
        printf("%d月は%d日まであります\n", month, maxday_of_month(month, year));
    }
}