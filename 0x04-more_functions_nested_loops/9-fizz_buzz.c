#include <stdio.h>

/**
 * main - main block, solve fizz buzz from numbers 1 to 100
 * Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz.
 * Multiples of both 3 and 5 should print FizzBuzz.
 * Return: void
 */
int main(void)
{

int p = 100;
int i;

i = 1;
while (i <= p)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}

else if (i % 3 == 0)
{
printf("Fizz");
}

else if (i % 5 == 0)
{
printf("Buzz");
}

else
{
printf("%i ", i);
}

i++;
}
printf("\n");

return (0);
}
