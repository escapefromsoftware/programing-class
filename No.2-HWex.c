#include<stdio.h>
#include<string.h>

int main()
{

float a,b,c;
printf("1つ目の数字を入力してください:");
if (scanf("%f", &a) != 1) {
    printf("エラー: 数字を入力してください。\n");
    return 1;
}
printf("2つ目の数字を入力してください:");
if (scanf("%f", &b) != 1) {
    printf("エラー: 数字を入力してください。\n");
    return 1;
}
printf("3つ目の数字を入力してください:");
if (scanf("%f", &c) != 1) {
    printf("エラー: 数字を入力してください。\n");
    return 1;
}

if (a <= b && b <= c)
{
    printf("%f <= %f <= %f\n",a,b,c);
}
else if (a <= c && c <= b)
{
    printf("%f <= %f <= %f\n",a,c,b);
}
else if (b <= a && a <= c)
{
    printf("%f <= %f <= %f\n",b,a,c);
}
else if (b <= c && c <= a)
{
    printf("%f <= %f <= %f\n",b,c,a);
}
else if (c <= a && a <= b)
{
    printf("%f <= %f <= %f\n",c,a,b);
}
else if (c <= b && b <= a)
{
    printf("%f <= %f <= %f\n",c,b,a);
}
return 0;

}