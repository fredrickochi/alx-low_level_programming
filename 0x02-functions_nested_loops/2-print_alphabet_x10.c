#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet i lowercase 10 times
 *
 * Return: Always 0.
 */
void print_alphabetx10(void);
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
