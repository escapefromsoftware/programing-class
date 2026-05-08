#include<stdio.h>
int main(){
    int ans = 1, a;
    int n=1;
    unsigned int aa ;

    while(n <= 5 ){
        printf("®”‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B");
        scanf("%d", &a);
        ans = ans * a;

        if((ans < -10000)||(ans > 10000)){
            printf("%d\n",ans);
            return 0;
        }
        n=n+1;

        printf("%d \n",ans);
    }
    return 0;
}