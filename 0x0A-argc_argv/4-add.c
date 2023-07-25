#include <stdio.h>
#include <stdlib.h>
/**
* main -prints its name
* @argc: argument count
* @argv: argument vector
*
* Return: Always Zero
*/
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 0; i < argc ; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
