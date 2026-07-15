#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    FILE *fp = fopen("No6_HW2.txt", "wt");
    if(fp == NULL){
        perror("file can not open\n");
        exit(1);
        return 0;
    }

    double x = 0.0;
    while(x < 10.0){
        double y = sin(x);
        fprintf(fp, "%lf\t%lf\n", x, y);
        x += 0.1;
    }
    fclose(fp);
    return 0;
}