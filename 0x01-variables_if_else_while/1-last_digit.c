#include <stdlib.h>
#include <time.h>

/**
  * main - main function
  *
  * Description: This program will assign a random number to the variabla
  * "n" each time it is executed. Complete the source code in order to
  * print the last digit of the number stored in the variable "n".
  *
  * Return: 0
  */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n, last);
	else if (last < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	return (0);
}
