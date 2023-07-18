#include <stdio.h>

/**
 * print_alphabet - prints the lower cas alphbetics
 *
 * Return - this function return nothing
*/
void print_alphabet(void)
{
	char alpha = 'A';

	while (alpha >= 97 && alpha <= 122)
	{
		putchar(alpha);
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
