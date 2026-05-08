#include<stdio.h>

int main(){
    int tate,yoko,menseki,shuunonagasa;
    printf("c‚Ì’·‚³‚Æ‰¡‚Ì’·‚³‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢B:");
    scanf("%d %d",&tate,&yoko);
    menseki = tate * yoko;
    shuunonagasa = 2 * (tate + yoko);
    printf("–ÊÏ: %d\n", menseki);
    printf("ü‚Ì’·‚³: %d\n", shuunonagasa);
    return 0;
}
