#include <stdio.h>
	#include <stdlib.h>
	#include <time.h>

	int main() {
		int r;
		srand(time(NULL));
		printf("1: %d / %d\n", rand(), RAND_MAX);
		printf("2: %d / %d\n", rand(), RAND_MAX);
		printf("3: %d / %d\n", rand(), RAND_MAX);
		return 0;
	}