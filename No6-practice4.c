#include<stdio.h>
#define NUM 10

void main() {
    int i;
    int score[NUM];
    float new_score[NUM];
    int max_score, min_score;

    for (i = 0; i < NUM; i++)
    {

        printf("%d人目の点数:",i+1);
        scanf("%d",&score[i]);

    }
    max_score = score[0];
    min_score = score[0];
    for (i = 0; i < NUM; i++)
    {
        if(score[i] > max_score)
        {
            max_score = score[i];
        }
        if(score[i] < min_score)
        {
            min_score = score[i];
        }
    }
    printf("最大値:%d 最小値:%d\n",max_score,min_score);

    for(i = 0; i < NUM; i++)
    {
        new_score[i] = 50 * (score[i] - min_score) / (max_score - min_score) + 50;
        printf("%d:%d -> %f\n",i+1,score[i],new_score[i]);
    }


}


