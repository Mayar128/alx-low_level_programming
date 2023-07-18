#include "main.h"
void print_alphabet(void)
{
	char alpha = 'A';

	while (alpha >= 97 && alpha <= 122)
	{
		puts(alpha);
		alpha++;
	}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
