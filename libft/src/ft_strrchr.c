/*
 *  Searches for the last occurrence of <c> char on
 *  the string pointed by <str>.
 *
 *  @param <str> pointer to the memory block string to search.
 *  @param <c> character to be searched.
 *
 *  @return pointer to the last occurrence.
*/

#include <stdio.h>
#include "libft.h"

char *ft_strrchr(const char *str, int c) {
    int n;

    n = ft_strlen(str);
    while (n != -1) {
        if (str[n] == c)
            return ((char *)&str[n]);
        n--;
    }
    return (NULL);
}
