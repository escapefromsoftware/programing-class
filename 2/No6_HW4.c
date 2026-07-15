#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    FILE *fp;
    fp = fopen("No6_HW4.txt", "wt");
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
    double theta = 0.1;
    double x1, y1;

    fprintf(fp, "%lf\t%lf\n", x[0], y[0]);
    fprintf(fp, "%lf\t%lf\n", x[1], y[1]);
    fprintf(fp, "%lf\t%lf\n", x[2], y[2]);
    fprintf(fp, "%lf\t%lf\n", x[3], y[3]);
    fprintf(fp, "%lf\t%lf\n", x[0], y[0]);
    fprintf(fp, "\n");

    while(theta < 1.0){
        for(int i = 0; i < 4; i++){
            x1 = cos(theta) * x[i] + sin(theta) * y[i];
            y1 = -sin(theta) * x[i] + cos(theta) * y[i];
            fprintf(fp, "%lf\t%lf\n", x1, y1);
        }
        x1 = cos(theta) * x[0] + sin(theta) * y[0];
        y1 = -sin(theta) * x[0] + cos(theta) * y[0];
        fprintf(fp, "%lf\t%lf\n", x1, y1);
        fprintf(fp, "\n");
        theta += 0.1;
    }
    fclose(fp);
    return 0;
}