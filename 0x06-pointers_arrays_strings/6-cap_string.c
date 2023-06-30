#include "main.h"

/**
 * @str: The string
 * Return
 */
char *cap_string(char *str)
{
	int index = 0;

	while (sttr[index])
	{
		while (!([index] >= 'a' && str[index] <= 'z'))
				imdex++;
				if (str [index - 1] == ' ' ||
				str [index -1] == '\t' ||
				str [index -1] == '\n' ||
				str [index -1] == ',' ||
				str [index -1] == ':' ||
				str [index -1] == '.' ||
				str [index -1] == '!' ||
				str [index -1] == '?' ||
				str [index -1] == '=' ||
				str [index -1] == '(' ||
				str [index -1] == ')' ||
				str [index -1] == '{' ||
				str [index -1] == '}' ||
				index == 0)
				str[index] -= 32;
				index++;
	}
	return (str);
}
