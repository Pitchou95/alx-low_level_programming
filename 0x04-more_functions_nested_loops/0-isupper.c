#include "main.h"
/**
 * _isupper - Check if a letter is upper
 * @c: variable text
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
