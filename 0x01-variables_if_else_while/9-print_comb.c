#include <stdio.h>
/**
 * main - A code that prints all possible combinations of single-digit numbers using only the putchar() function
 * Return: 0
 */
int main(void)
{
	int i, j, k;
    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) {
            for (k = j + 1; k < 10; k++) {
                putchar(i + '0');
                putchar(',');
                putchar(' ');
                putchar(j + '0');
                putchar(',');
                putchar(' ');
                putchar(k + '0');
                putchar(',');
                putchar(' ');
            }
        }
    }
    putchar('\n');
    return 0;
}
