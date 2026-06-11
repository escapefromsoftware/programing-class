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
    for(int i = 1900; i < y; i++){
        if(is_uruu(i) == 1){
            days += 366;
        }
        else{
            days += 365;
        }
    }
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
    return days;
}

int youbi(int days){
    int youbi = days % 7;
    return youbi;
}


int main(){
    int y, m;
    printf("年と月を入力してください:\n");
    scanf("%d %d", &y, &m);
    int uruu = is_uruu(y);
    int maxdays = maxday_of_month(m, y);
    int day_of_week = youbi(days_from(y, m, 1));
    if(maxdays == -1){
        printf("エラー：不正な月です\n");
    }else if (day_of_week == -1){
        printf("エラー：不正な日付です\n");
    }
    else{
        printf(" Su Mo Tu We Th Fr Sa\n");
        switch(day_of_week){
            case 0://日曜日
                printf(" ");//1
                for(int i = 1; i <= maxdays; i++){
                    if(i < 10 && i > 1){
                        printf("  ");
                    }else if((i + day_of_week) % 7 == 0){
                        printf(" ");
                    }
                    else{
                        printf(" ");
                    }
                    printf("%d", i);
                    if((i + day_of_week) % 7 == 0){
                        printf("\n");
                    }
                }
                break;
            case 1://月曜日
                printf("    ");//4スペース
                for(int i = 1; i <= maxdays; i++){
                    if(i < 10 && i > 1){
                        printf("  ");
                    }else if((i + day_of_week) % 7 == 0){
                        printf(" ");
                    }
                    else{
                        printf(" ");
                    }
                    printf("%d", i);
                    if((i + day_of_week) % 7 == 0){
                        printf("\n");
                    }
                }
                break;
            case 2://火曜日
                printf("       ");//7
                for(int i = 1; i <= maxdays; i++){
                    if(i < 10 && i > 1){
                        printf("  ");
                    }else if((i + day_of_week) % 7 == 0){
                        printf(" ");
                    }
                    else{
                        printf(" ");
                    }
                    printf("%d", i);
                    if((i + day_of_week) % 7 == 0){
                        printf("\n");
                    }
                }
                break;
            case 3://水曜日
                printf("          ");//10スペース
                for(int i = 1; i <= maxdays; i++){
                    if(i < 10 && i > 1){
                        printf("  ");
                    }else if((i + day_of_week) % 7 == 0){
                        printf(" ");
                    }
                    else{
                        printf(" ");
                    }
                    printf("%d", i);
                    if((i + day_of_week) % 7 == 0){
                        printf("\n");
                    }
                }
                break;
            case 4://木曜日
                printf("             ");//13スペース
                for(int i = 1; i <= maxdays; i++){
                    if(i < 10 && i > 1){
                        printf("  ");
                    }else if((i + day_of_week) % 7 == 0){
                        printf(" ");
                    }
                    else{
                        printf(" ");
                    }
                    printf("%d", i);
                    if((i + day_of_week) % 7 == 0){
                        printf("\n");
                    }
                }
                break;
            case 5://金曜日
                printf("                ");//16スペース
                for(int i = 1; i <= maxdays; i++){
                    if(i < 10 && i > 1){
                        printf("  ");
                    }else if((i + day_of_week) % 7 == 0){
                        printf(" ");
                    }
                    else{
                        printf(" ");
                    }
                    printf("%d", i);
                    if((i + day_of_week) % 7 == 0){
                        printf("\n");
                    }
                }
                break;
            case 6://土曜日
                printf("                   ");//19スペース
                for(int i = 1; i <= maxdays; i++){
                    if(i < 10 && i > 1){
                        printf("  ");
                    }else if((i + day_of_week) % 7 == 0){
                        printf(" ");
                    }
                    else{
                        printf(" ");
                    }
                    printf("%d", i);
                    if((i + day_of_week) % 7 == 0){
                        printf("\n");
                    }
                }
                break;
        }
    }
    
    
}