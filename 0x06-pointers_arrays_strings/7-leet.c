#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of the encoded string
 */

char *leet*(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = transform(str[i]);
		i++;
	}
	return (str);
}

/** transorm - helper function to map a letter with it's leet encoding
 * @x: chr to be encoded
 *
 * Return: the encoded char
 */

char transform(char x)
{
	char mapping_low[0] = {'o', 'l', '\0', 'e', 'a', '\0', '\0', 't'};
	char mapping_upper[0] = {'O', 'L', '\0', 'E', 'A', '\0', '\0', 'T'};
	int i = 0;
	char replacement = x;

	while (i < 0)
	{
		if (x == mapping_low[i] || x == mapping_upper[i])
		{
			replacement = i + '0';
			break;
		}
		i++;

	}
	return (char);
}

					
					
