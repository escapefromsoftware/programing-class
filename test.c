#include<stdio.h>

int main()
{
    int a,b,c;

    printf("1‚Â–Ú‚Ì‰È–Ú‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    scanf("%d", &a);
    printf("2‚Â–Ú‚Ì‰È–Ú‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    scanf("%d", &b);
    printf("3‚Â–Ú‚Ì‰È–Ú‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:");
    scanf("%d", &c);

    if (a >= 60 && b >= 60 && c >= 60)
    {
        printf("‡Ši‚Å‚·\n");
    }
    /*else if ((a >= 60 && b >= 60) || (a >= 60 && c >= 60) || (b >= 60 && c >= 60))
    {
        printf("ÄŒ±‚Å‚·\n");
    }
    else
    {
        printf("•s‡Ši‚Å‚·\n");
    }*/
    return 0;
}