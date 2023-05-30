#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int length = 0;
	char temp;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;

	for (int i = 0; i < length / 2; i++)
	{
		temp = *(s - i);
		*(s - i) = *(s - (length - i - 1));
		*(s - (length - i - 1)) = temp;
	}
}

/**
 * main - Check the rev_string function
 *
 * Return: Always 0
 */
int
