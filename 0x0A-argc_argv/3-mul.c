#include <stdio.h>

/**
  * main - Print the the multiplication of two numbers
  * @argc: Number of arguments
  * @argv: Array of pointers of Arguments
  *
  * Return: 0 if success, 1 if failure
  */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	printf("%i\n", a * b);
	return (0);
}
