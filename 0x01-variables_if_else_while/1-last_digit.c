#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program thats print the last digit of the number
 * Return:(0)
 */
int main(void)
{
int n;
int i;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
printf("Last digit of %d is %d and is greater than 5\m", n);
else if (n == 0)
printf("Last digit of %d is %d and is 0\m", n);
else if (n < 6 && n != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\m", n);
return (0);
}
