/*
 *  Allocates (with malloc(3)) and returns a new string, wich is the
 *  result of the concatenation of <s1> and <s2>.
 *
 *  @param <s1> the prefix string.
 *  @param <s2> the suffix string.
 *
 *  @return the new string. NULL if allocation fails.
*/

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_strjoin(char const *s1, char const *s2) {
    int s1len;
    int s2len;
    char *result;

    s1len = ft_strlen(s1);
    s2len = ft_strlen(s2);

    if (!(result = (char *)malloc(s1len + s2len + 1)))
        return (NULL);

    ft_bzero(result, s1len + s2len + 1);

    ft_memcpy(result, s1, s1len);
    ft_memcpy(result + s1len, s2, s2len);
    return (result);
}
