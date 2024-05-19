/*
 *  Searches for the first occurrence of <c> in the first <n> bytes of <str>.
 *
 *  @param <str> pointer to the string to be searched.
 *  @param <c> character to search.
 *  @param <n> number of bytes to search on.
 *
 *  @return pointer to the first occurrence.
*/

#include <stdio.h>
#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n) {
    unsigned int i;

    i = -1;
    do {
        i++;
        if (((char *)str)[i] == (char)c)
            return ((char *)str+i);
    } while (((char *)str)[i] != '\0' && i+1 < n);
    return (NULL);
}
