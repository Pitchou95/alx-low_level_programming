#include "main.h"

/**
 * -strancat -concatente two strings
 * 
 * 
 * 
 * 
 * Return: dest
 */
char *_strancat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++
	}
	l = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] =src [j];
		i++;
		j++;
	}
	dest[i] ='\0';
	return (dest);
}
