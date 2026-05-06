#include <stdio.h>

int main(){
    int num,rslt1,rslt2,rslt3;
    printf("êÆêîÇì¸óÕÇµÇƒÇ≠ÇæÇ≥Ç¢:");
    scanf("%d", &num);
    rslt1 = num % 15;

    switch (rslt1)
    {
    case 0:
        printf("FizzBuzz");
        break;

    case 1:
    case 2:
    case 4:
    case 7:
    case 8:
    case 11:
    case 13:
    case 14:
        printf("%d", num);
        break;

    case 3:
    case 6:
    case 9:
    case 12:
        printf("Fizz");
        break;

    case 5:
    case 10:
        printf("Buzz");
        break;
    }
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
//aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
/*aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaa
a
a
a
aaaaaaaaaaaaaaaaaaa
a
aaaaaaaaaaaaaa
*/
} 