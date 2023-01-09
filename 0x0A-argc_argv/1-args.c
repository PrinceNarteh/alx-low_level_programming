#include <stdio.h>
#include <stdlib.h>

/**
  * main - Print the number of arguments passed to the programme
  * @argc: Number of arguments
  * @argv: Array of pointers of Arguments
  *
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);

	exit(EXIT_SUCCESS);
}
