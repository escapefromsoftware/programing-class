#include<stdio.h>

void main()
{
int math,english,language,pass_obj = 0,saikou,saitei,sience,social;
double average;
printf("数学の点数を入力してください:");
scanf("%d",&math);
printf("英語の点数を入力してください:");
scanf("%d",&english);
printf("国語の点数を入力してください:");
scanf("%d",&language);
printf("理科の点数を入力してください:");
scanf("%d",&sience);
printf("社会の点数を入力してください:");
scanf("%d",&social);

if(math < 0 || math > 100 || english < 0 || english > 100 || language < 0 || language > 100 || sience < 0 || sience > 100 || social < 0 || social > 100)
{
	printf("エラー: 点数は0から100の範囲で入力してください。\n");
	return;
}

if (math >= 60)
{
	pass_obj++;
}
if (english >= 60)
{
	pass_obj++;
}
if (language >= 60)
{
	pass_obj++;
}
if (sience >= 60)
{
	pass_obj++;
}
if (social >= 60)
{
	pass_obj++;
}
if (pass_obj >= 3)
{
	printf("合格です\n");
}
else if (pass_obj == 2)
{
	printf("再試験です\n");
}
else if (pass_obj == 1||pass_obj == 0)
{
	printf("不合格です\n");
}

average = (math + english + language + sience + social) / 5.0;
printf("平均点は%fです\n", average);

if (math >= english && math >= language && math >= sience && math >= social)
{
	saikou = math;
}
else if (english >= math && english >= language && english >= sience && english >= social)
{
	saikou = english;
}
else if (language >= math && language >= english && language >= sience && language >= social)
{
	saikou = language;
}
else if (sience >= math && sience >= english && sience >= language && sience >= social)
{
	saikou = sience;
}
else if (social >= math && social >= english && social >= language && social >= sience)
{
	saikou = social;
}
if (math <= english && math <= language && math <= sience && math <= social)
{
	saitei = math;
}
else if (english <= math && english <= language && english <= sience && english <= social)
{
	saitei = english;
}
else if (language <= math && language <= english && language <= sience && language <= social)
{
	saitei = language;
}
else if (sience <= math && sience <= english && sience <= language && sience <= social)
{
	saitei = sience;
}
else if (social <= math && social <= english && social <= language && social <= sience)
{
	saitei = social;
}
printf("最高点は%dです\n", saikou);
printf("最低点は%dです\n", saitei);
}