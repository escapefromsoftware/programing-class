#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int r;
	srand(time(NULL));
	rand();
	rand();
	rand();
	rand();
	rand();
	r = rand() % 3 + 1;
    if(r == 1)printf("hello\n");
    else if(r == 2|| r == 3)printf("bye\n");
    return 0;
}