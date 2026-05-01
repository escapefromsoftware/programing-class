#include<stdio.h>
void main()
{

int mon;
int day;
printf("何月ですか?");
scanf("%d",&mon);
printf("何日ですか?");
scanf("%d",&day);

switch (mon){
case 1:
if (day >=20 && day <=31) {
    printf("星座は水瓶座です。\n");
    break;
}
if (day >=1 && day <=19) {
    printf("星座は山羊座です。\n");
    break;
}
case 2:
if (day >=19 && day <=28) {
    printf("星座は魚座です。\n");
    break;
}
if (day >=1 && day <=18) {
    printf("星座は水瓶座です。\n");
    break;
}
case 3:
if (day >=21 && day <=31) {
    printf("星座は牡羊座です。\n");
    break;
}
if (day >=1 && day <=20) {
    printf("星座は魚座です。\n");
    break;
}
case 4:
if (day >=20 && day <=30) {
    printf("星座は牡牛座です。\n");
    break;
}
if (day >=1 && day <=19) {
    printf("星座は牡羊座です。\n");
    break;
}
case 5:
if (day >=21 && day <=31) {
    printf("星座は双子座です。\n");
    break;
}
if (day >=1 && day <=20) {
    printf("星座は牡牛座です。\n");
    break;
}
case 6:
if (day >=21 && day <=30) {
    printf("星座は蟹座です。\n");
    break;
}
if (day >=1 && day <=20) {
    printf("星座は双子座です。\n");
    break;
}
case 7:
if (day >=23 && day <=31) {
    printf("星座は獅子座です。\n");
    break;
}
if (day >=1 && day <=22) {
    printf("星座は蟹座です。\n");
    break;
}
case 8:
if (day >=23 && day <=31) {
    printf("星座は乙女座です。\n");
    break;
}
if (day >=1 && day <=22) {
    printf("星座は獅子座です。\n");
    break;
}
case 9:
if (day >=23 && day <=30) {
    printf("星座は天秤座です。\n");
    break;
}
if (day >=1 && day <=22) {
    printf("星座は乙女座です。\n");
    break;
}
case 10:
if (day >=23 && day <=31) {
    printf("星座は蠍座です。\n");
    break;
}
if (day >=1 && day <=22) {
    printf("星座は天秤座です。\n");
    break;
}
case 11:
if (day >=23 && day <=30) {
    printf("星座は射手座です。\n");
    break;
}
if (day >=1 && day <=22) {
    printf("星座は蠍座です。\n");
    break;
}
case 12:
if (day >=22 && day <=31) {
    printf("星座は山羊座です。\n");
    break;
}
if (day >=1 && day <=21) {
    printf("星座は射手座です。\n");
    break;
}
}
}