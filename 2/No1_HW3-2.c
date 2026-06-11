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

int days_from(int y, int m, int d){
    int days = 0;
    if(is_uruu(y) == 1){
        for(int i = 1; i < m; i++){
            days += maxday_of_month(i, y);
        }
    }
    else{
        for(int i = 1; i < m; i++){
            days += maxday_of_month(i, y);
        }
    }
    days += d;
    return days-1;
}

int main(){
    int y, m, d;
    printf("年、月、日を入力してください:\n");
    scanf("%d %d %d", &y, &m, &d);
    if(maxday_of_month(m, y) == -1){
        printf("エラー：不正な月です\n");
    }
    else if(d > maxday_of_month(m, y) || d < 1){
        printf("エラー：不正な日です\n");
    }
    else{
        printf("%d年%d月%d日は%d年1月1日から%d日離れています。\n", y, m, d, y, days_from(y, m, d));
    }
}