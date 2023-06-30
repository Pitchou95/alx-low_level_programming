#include "main.h"

/**
 * _strncat - Concatenates two strings up to n characters
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to concatenate
 * Return: Pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
        i++;

    while (j < n && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    dest[i] = '\0';

    return dest;
}

