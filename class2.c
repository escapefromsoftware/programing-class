#include <stdio.h>

int main()
{
double a;

scanf("%lf",&a);

if (a > 0)
{
    printf("³‚Ì”‚Å‚·\n");
}
else if (a < 0)
{
    printf("•‰‚Ì”‚Å‚·\n");
}
else
{
    printf("ƒ[ƒ‚Å‚·\n");
}

int n = (int)a;
if (a != n)
{
    printf("¬”‚Å‚·\n");
}
else
{
    printf("¬”‚Å‚Í‚ ‚è‚Ü‚¹‚ñ\n");
}
return 0;
}