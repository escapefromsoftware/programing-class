#include<stdio.h>
void main()
{

int mon;
int day;
printf("生まれた月を入力してください。");
scanf("%d",&mon);
printf("生まれた日を入力してください。");
scanf("%d",&day);

switch (mon){
case 1:
if (day >=20 && day <=31) {
    printf("みずがめ座です。\n");
    break;
}
if (day >=1 && day <=19) {
    printf("山羊座です\n");
    break;
}
case 2:
if (day >=19 && day <=28) {
    printf("うお座です。\n");
    break;
}
if (day >=1 && day <=18) {
    printf("みずがめ座です。\n");
    break;
}
case 3:
if (day >=21 && day <=31) {
    printf("おひつじ座です。\n");
    break;
}
if (day >=1 && day <=20) {
    printf("うお座です。\n");
    break;
}
case 4:
if (day >=20 && day <=30) {
    printf("おうし座です。\n");
    break;
}
if (day >=1 && day <=19) {
    printf("おひつじ座です。\n");
    break;
}
case 5:
if (day >=21 && day <=31) {
    printf("ふたご座です。\n");
    break;
}
if (day >=1 && day <=20) {
    printf("おうし座です。\n");
    break;
}
case 6:
if (day >=22 && day <=30) {
    printf("かに座です。\n");
    break;
}
if (day >=1 && day <=21) {
    printf("ふたご座です。\n");
    break;
}
case 7:
if (day >=23 && day <=31) {
    printf("しし座です。\n");
    break;
}
if (day >=1 && day <=22) {
    printf("かに座です。\n");
    break;
}
case 8:
if (day >=23 && day <=31) {
    printf("おとめ座です。\n");
    break;
}
if (day >=1 && day <=22) {
    printf("しし座です。\n");
    break;
}
case 9:
if (day >=23 && day <=30) {
    printf("てんびん座です。\n");
    break;
}
if (day >=1 && day <=22) {
    printf("おとめ座です。\n");
    break;
}
case 10:
if (day >=24 && day <=31) {
    printf("さそり座です。\n");
    break;
}
if (day >=1 && day <=23) {
    printf("てんびん座です。\n");
    break;
}
case 11:
if (day >=22 && day <=30) {
    printf("いて座です。\n");
    break;
}
if (day >=1 && day <=21) {
    printf("さそり座です。\n");
    break;
}
case 12:
if (day >=22 && day <=31) {
    printf("やぎ座です。\n");
    break;
}
if (day >=1 && day <=21) {
    printf("いて座です。\n");
    break;
}
}
}