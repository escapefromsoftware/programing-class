#include <stdio.h>

int year;


int main(){
    printf("生まれた年を入力してください。:");
    scanf("%d", &year);
if (year < 1900)
{
    printf("エラー：1900以降にしてください。\n");
}

year = year - 1900;

switch (year % 12) {
case 0:
    printf("子\n");
    break;

    case 1:
    printf("丑\n");
    break;

    case 2:
    printf("寅\n");
    break;

    case 3:
    printf("卯\n");
    break;

    case 4:
    printf("辰\n");
    break;

    case 5:
    printf("巳\n");
    break;

    case 6:
    printf("午\n");
    break;

    case 7:
    printf("未\n");
    break;

    case 8:
    printf("申\n") ;
    break;

    case 9:
    printf("酉\n");
    break;

    case 10:
    printf("戌\n");
    break;

    case 11:
    printf("亥\n");
    break;
}
}
