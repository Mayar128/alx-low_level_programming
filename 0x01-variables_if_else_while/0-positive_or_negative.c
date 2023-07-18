#include <stdio.h>
#include <time.h>
/**
 * main - Entry of the program
 *
 * Return: Always zero
*/
int main(void)
{
	srand(time(NULL));
	float n = rand();

	if (n > 0)
	{
		puts("is positive");
	}
	else if (n < 0)
	{
		puts("is negative");
	}
	else
	{
		puts("is zero");
	}
	return (0);

}
