#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
<<<<<<< HEAD
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
=======
        int l = 0;

        int x = 0;

        while (*(src + l) != '\0')
        {
                l++;
        }
        for ( ; x < l ; x++)
        {
                dest[x] = src[x];
        }
        dest[l] = '\0';
        return (dest);
>>>>>>> b3959d77ad41a551d1648193588ede973c64d82a
}
