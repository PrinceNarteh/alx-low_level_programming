#include <stdio.h>
#include <stdlib.h>

/**
  * main - Print the number of arguments passed to the programm
  * @argc: Number of arguements
  * @argv: Array of pointers of Arguements
  * 
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	(void) argc;
	print("%d\n", argc);

	exit(EXIT_SUCCESS);
}
