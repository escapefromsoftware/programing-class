#include <stdio.h>

int main()
{

int i;
double data[5];

data[0] = 5.0;
data[1] = 5.0;
data[2] = 11.2;
data[3] = 2;
data[4] = 2.9;
data[5] = 10.00;

for ( i=0 ; i<=5 ; i++ )
{

printf("data[%d]=%lf \n",i,data[i]);

}
return 0;
}