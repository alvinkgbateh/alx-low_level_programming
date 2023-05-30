#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to the string
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	while (length > 0)
	{
		s--;
		_putchar(*s);
		length--;
	}

	_putchar('\n');
}

/**
 * main - Check the print_rev function
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);

	return (0);
}
