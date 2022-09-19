/*
 * File: 9-strcpy.c
 * Auth: Samson Ajulor
 */

#include "main.h"

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The src string to copy.
 *
 * Return: A pointer to the dest string @dest.
 */
char *_strcpy(char *dest, char *src)
{

    // return if no memory is allocated to the dest
    if (dest == NULL) {
        return NULL;
    }
 
    // take a pointer pointing to the beginning of the dest string
    char *ptr = dest;
 
    // copy the C-string pointed by src into the array
    // pointed by dest
    while (*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
 
    // include the terminating null character
    *dest = '\0';
 
    // the dest is returned by standard `strcpy()`
    return ptr;
}
