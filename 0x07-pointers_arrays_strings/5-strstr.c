#include "main.h"
#include <stddef.h>
/*
 * _strstr - function that locates a substring
 * @haystack: point to input
 * @needle: point to input
 * return char or NULL.
*/
char *_strstr(char *haystack, char *needle)
{
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
char *copy_hay = haystack;
char *copy_need = needle;
while (*copy_hay != '\0' && *copy_need != '\0' && *copy_hay == *copy_need)
{
copy_hay++;
copy_need++;
}
if (*copy_need == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
