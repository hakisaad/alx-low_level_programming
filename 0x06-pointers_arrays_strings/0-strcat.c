#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to append
 *
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src) {
    char *ptr = dest;
    
    // Move pointer to the end of dest string
    while (*ptr != '\0') {
        ptr++;
    }
    
    // Append src string to dest
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    
    // Add terminating null byte
    *ptr = '\0';
    
    return dest;
}
