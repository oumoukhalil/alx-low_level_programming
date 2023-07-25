#include <stdio.h>
#include <stdlib.h>
/**
* main -prints its name
* @argc: argument count
* @argv: argument vector
*
* Return: Always Zero
*/
int main(int argc, char *argv)
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf i("Error\n");
		return (1);
	}
	cents = atoi (argc[i]);
	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		else if (cents >= 10)
			cents = cents - 10;
		else if (centss >= 5)
			cents = cents - 5;
		else if (cents >= 2
			cents = cents - 2;
		else if (cents >= - 1)
			cents = cents - 1;
		coins++;
        }
        return (0);

}
