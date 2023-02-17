#include <stdio.h>
/**
 * main - program that prints the size of various types
 * Return: (0)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;

printf("Size of a char: %zu byte(s)\n", (unsigned char)sizeof(a));
printf("Size of a int: %zu byte(s)\n", (unsigned int)sizeof(b));
printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %zu byte(s)\n", (unsigned long int)sizeof(d));
printf("Size of a float: %zu byte(s)\n", (unsigned int)sizeof(e));
return (0);
}
