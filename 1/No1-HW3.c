#include<stdio.h>

int main(){
    double s;
    int m,h;
    scanf("%lf",&s);
    m = (int)s / 60;
    h = m / 60;
    printf("%d:%d:%lf\n",h,m%60,s-(m*60));
    return 0;
}
