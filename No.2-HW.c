#include<stdio.h>

int main()
{

int a,b,c;
printf("1‚Â‚ß‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B:");
scanf("%d", &a);
printf("2‚Â‚ß‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B:");
scanf("%d", &b);
printf("3‚Â‚ß‚Ì”š‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B:");
scanf("%d", &c);

if (a <= b && b <= c)
{
    printf("%d <= %d <= %d\n",a,b,c);
}
else if (a <= c && c <= b)
{
    printf("%d <= %d <= %d\n",a,c,b);
}
else if (b <= a && a <= c)
{
    printf("%d <= %d <= %d\n",b,a,c);
}
else if (b <= c && c <= a)
{
    printf("%d <= %d <= %d\n",b,c,a);
}
else if (c <= a && a <= b)
{
    printf("%d <= %d <= %d\n",c,a,b);
}
else if (c <= b && b <= a)
{
    printf("%d <= %d <= %d\n",c,b,a);
}
return 0;

}