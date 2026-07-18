#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define _USE_MATH_DEFINES


void koch(double x0, double y0, double x1, double y1, int n, FILE *fp){
    if(n == 0){
        fprintf(fp, "%lf\t%lf\n", x0, y0);
        fprintf(fp, "%lf\t%lf\n", x1, y1);
    } else {
        double x2 = (2*x0 + x1) / 3;
        double y2 = (2*y0 + y1) / 3;
        double x3 = (x0 + 2*x1) / 3;
        double y3 = (y0 + 2*y1) / 3;
        double x4 = (x2 + x3) / 2 - sqrt(3.0) * (y3 - y2) / 3;
        double y4 = (y2 + y3) / 2 + sqrt(3.0) * (x3 - x2) / 3;

        koch(x0, y0, x2, y2, n-1, fp);
        koch(x2, y2, x4, y4, n-1, fp);
        koch(x4, y4, x3, y3, n-1, fp);
        koch(x3, y3, x1, y1, n-1, fp);
    }
}

int main(){
    FILE *fp;
    fp = fopen("No6_HW5.txt", "wt");
    if(fp == NULL){
        perror("file can not open\n");
        exit(1);
        return 0;
    }

    int n = 5; 
    double x0 = 0.0, y0 = 0.0;
    double x1 = 1.0, y1 = 0.0;

    koch(x0, y0, x1, y1, n, fp);

    fclose(fp);
    return 0;
}