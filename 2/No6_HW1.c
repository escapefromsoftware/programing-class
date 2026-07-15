#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    FILE *fp;
    fp = fopen("No6_HW1.txt", "wt");
    if(fp == NULL){
        perror("file can not open\n");
        exit(1);
        return 0;
    }
    double x[4], y[4];
    x[0] = 0.0; y[0] = 0.0;
    x[1] = 1.0; y[1] = 0.0;
    x[2] = 1.0; y[2] = 1.0;
    x[3] = 0.0; y[3] = 1.0;
    fprintf(fp, "%lf\t%lf\n", x[0], y[0]);
    fprintf(fp, "%lf\t%lf\n", x[1], y[1]);
    fprintf(fp, "%lf\t%lf\n", x[2], y[2]);
    fprintf(fp, "%lf\t%lf\n", x[3], y[3]);
    fprintf(fp, "%lf\t%lf\n", x[0], y[0]);


    fclose(fp);
    return 0;
}
