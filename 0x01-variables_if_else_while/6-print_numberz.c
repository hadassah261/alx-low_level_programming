#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - code that assigns a random number to the variable n each time it is executed and prints the last digit of the number stored in the variable n
 * Return: 0
 */
int main(void) {
    int n;
    srand(time(NULL));
    n = rand();
    printf("Last digit of %d is ", n);
    if (n % 10 > 5) {
        printf("%d and is greater than 5\n", n % 10);
    } else if (n % 10 == 0) {
        printf("%d and is 0\n", n % 10);
    } else {
        printf("%d and is less than 6 and not 0\n", n % 10);
    }
    return 0;
}
