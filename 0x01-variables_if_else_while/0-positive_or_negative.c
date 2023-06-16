#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int n;

    srand(time(0)); /* Initialize random seed */

    n = rand() % 201 - 100; /* Generate a random number between -100 and 100 */

    printf("The number %d is ", n);

    if (n > 0) {
        printf("positive");
    } else if (n < 0) {
        printf("negative");
    } else {
        printf("zero");
    }

    printf("\n");

    return 0;
}

