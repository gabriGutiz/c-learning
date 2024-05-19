/*
 *  Searches for the first occurrence of <c> char on
 *  the string pointed by <str>.
 *
 *  @param <str> pointer to the memory block to search.
 *  @param <c> character to be searched.
 *
 *  @return pointer to the first occurrence.
*/

#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *str, int c) {
    unsigned int i;

    i = -1;
    do {
        i++;
        if (str[i] == (char)c)
            return ((char *)&str[i]);
    } while (str[i] != '\0');
    return (NULL);
}
