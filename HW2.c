#include<stdio.h>

int main(){
    int tate,yoko,menseki,shuunonagasa;
    scanf("%d %d",&tate,&yoko);
    menseki = tate * yoko;
    shuunonagasa = 2 * (tate + yoko);
    printf("???: %d\n", menseki);
    printf("????????: %d\n", shuunonagasa);
    return 0;
}
