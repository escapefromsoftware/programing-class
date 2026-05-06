#include <stdio.h>

int year;


int main(){
    printf("年を入力してください:");
    scanf("%d", &year);
if (year < 1900)
{
    printf("1900年より前の年は入力できません\n");
}

year = year - 1900;

switch (year % 12) {
case 0:
    printf("子年\n");
    break;

    case 1:
    printf("丑年\n");
    break;

    case 2:
    printf("寅年\n");
    break;

    case 3:
    printf("卯年\n");
    break;

    case 4:
    printf("辰年\n");
    break;

    case 5:
    printf("巳年\n");
    break;

    case 6:
    printf("午年\n");
    break;

    case 7:
    printf("未年\n");
    break;

    case 8:
    printf("申年\n") ;
    break;

    case 9:
    printf("酉年\n");
    break;

    case 10:
    printf("戌年\n");
    break;

    case 11:
    printf("亥年\n");
    break;
}
}
