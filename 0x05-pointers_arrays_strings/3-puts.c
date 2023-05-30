#include "main.h"

/**
 * _puts - Prints a string followed by a new line
 * @str: Pointer to the string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}

/**
 * main - Check the _puts function
 *
 * Return: Always 0
 */
int main(void)
{
	char *str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_puts(str);

	return (0);
}
