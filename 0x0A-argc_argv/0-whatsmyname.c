#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * main - Print the name of the programme
  * @argc: Count the number of arguments
  * @argv: Array of pointers of the arguments
  *
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	(void) argc;
	print("%s\n", argv[0]);

	exit(EXIT_SUCCESS));
}
