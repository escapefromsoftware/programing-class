#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int gold() {
    if (rand() % 10 == 0) {  
        return gold() + gold();
    }

    return 1;               
}

int main() {
    int sumGold = 0;

    srand(time(NULL));

    for (int j = 0; j < 100; j++) {
        int totalGold = 0;

        for (int i = 0; i < 100; i++) {
            totalGold += gold();
        }

        printf("%d回目: %d g\n", j + 1, totalGold);
        sumGold += totalGold;
    }

    printf("100回の平均: %.2f g\n", sumGold / 100.00);

    return 0;
}