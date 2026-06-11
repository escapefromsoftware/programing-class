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
    int y, m, d;
    printf("”NAŒŽA“ú‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:\n");
    scanf("%d %d %d", &y, &m, &d);
    if(maxday_of_month(m, y) == -1){
        printf("ƒGƒ‰[F•s³‚ÈŒŽ‚Å‚·\n");
    }
    else if(d > maxday_of_month(m, y) || d < 1){
        printf("ƒGƒ‰[F•s³‚È“ú‚Å‚·\n");
    }
    else{
        int day_index = days_from(y, m, d);
        int weekday = youbi(day_index);
        printf("%d”N%dŒŽ%d“ú‚Í", y, m, d);
        switch(weekday){
            case 0:
                printf("“ú—j“ú‚Å‚·\n");
                break;
            case 1:
                printf("ŒŽ—j“ú‚Å‚·\n");
                break;
            case 2:
                printf("‰Î—j“ú‚Å‚·\n");
                break;
            case 3:
                printf("…—j“ú‚Å‚·\n");
                break;
            case 4:
                printf("–Ø—j“ú‚Å‚·\n");
                break;
            case 5:
                printf("‹à—j“ú‚Å‚·\n");
                break;
            case 6:
                printf("“y—j“ú‚Å‚·\n");
                break;
        }
    }
}