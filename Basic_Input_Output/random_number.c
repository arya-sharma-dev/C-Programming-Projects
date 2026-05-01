#include <stdio.h>
#include <stdlib.h>
#include <time.h>  

int main() {
    int lower = 10, upper = 100;
    int num;
    srand(time(0));
    num = (rand() % (upper - lower + 1)) + lower;

    printf("The random number between 10 and 100 is: %d\n", num);

    return 0;
}
