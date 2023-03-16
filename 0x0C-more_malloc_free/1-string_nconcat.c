#include <stdlib.h>		
#include "main.h"

/**
 * string_nconcat - concatenates n bytes of a string to another string
 *
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *result;
unsigned int i = 0, j = 0, s1_len = 0, s2_len = 0;

while (s1 && s1[s1_len])
s1_len++;

while (s2 && s2[s2_len])
s2_len++;

if (n < s2_len)
result = malloc(sizeof(char) * (s1_len + n + 1));
else
result = malloc(sizeof(char) * (s1_len + s2_len + 1));

if (!result)
return (NULL);

while (i < s1_len)
{
result[i] = s1[i];
i++;
}

while (n < s2_len && i < (s1_len + n))
result[i++] = s2[j++];

while (n >= s2_len && i < (s1_len + s2_len))
result[i++] = s2[j++];

result[i] = '\0';

return (result);

}
