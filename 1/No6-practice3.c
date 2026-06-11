#include<stdio.h>

void main()
{

    int i,a,max,min;
    int data[5];
    int sum;
    double average;

    printf("5‚Â‚Ì®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
    for ( i=0 ; i<5 ; i++ )
    {

        printf("%d‚Â–Ú‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢:",i+1);
        scanf("%d",&data[i]);

    }
    printf("“ü—Í‚³‚ê‚½”:%d,%d,%d,%d,%d \n", data[0], data[1], data[2], data[3], data[4]);
    sum = 0;
    for ( i=0 ; i<5 ; i++ )
    {

        sum = sum + data[i];

    }
    average = sum / 5.0;
    printf("•½‹Ï’l=%f\n",average);
    max = data[0];
    for ( i=0 ; i<5 ; i++ )
    {
        if ( data[i] > max )
        {
        max = data[i];
        }
    }
    printf("Å‘å’l=%d\n",max);
    min = data[0];
    for ( i=0 ; i<5 ; i++ )
        {
        if ( data[i] < min )
        {
    min = data[i];
    }
    }
printf("Å¬’l=%d\n",min);

}