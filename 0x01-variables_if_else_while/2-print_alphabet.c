#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - function
 * Return: (0)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'Z'; letter++)
	putchar(letter);
putchar("\n");
return (0);
}
