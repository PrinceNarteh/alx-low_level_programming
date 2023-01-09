#include <stdio.h>
#include <stdlib.h>

/**
  * main - Print the the multiplication of two numbers
  * @argc: Number of arguments
  * @argv: Array of pointers of Arguments
  *
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 2)
	{
		printf("Error\n");
		exit(EXIT_FAILURE);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%i\n", a * b);
	exit(EXIT_SUCCESS);
}
