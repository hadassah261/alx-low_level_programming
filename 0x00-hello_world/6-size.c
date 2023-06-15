#include <stdio.h>
/**
 * main - C program that prints the size of various types on the computer it is compiled and run on
 * Return: 0
 */
int main() {
	int integerType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of int: %ld bytes\n", sizeof(integerType));
    printf("Size of float: %ld bytes\n", sizeof(floatType));
    printf("Size of double: %ld bytes\n", sizeof(doubleType));
    printf("Size of char: %ld byte\n", sizeof(charType));

    return 0;
}
