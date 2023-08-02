#include "main.h"
#include <stdio.h>
/*
 * _strstr - locates a substring
 * @haystack: A pointer to the substring to search for
 * @needle: A pointer to the substring to search for
 * @return A pointer to the first occurrence of the sub string 'needle' in the
 * string 'haystack',
 * or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;

			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
