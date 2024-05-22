/*
 *  Allocates (with malloc(3)) and returns a substring from the string <s>.
 *  The substring begins at index <start> and is of maximum size <len>.
 *
 *  @param <s> the string from which to create the substring.
 *  @param <start> the start index of the substring in the string <s>.
 *  @param <len> the maximum length of the substring.
 *
 *  @return the substring. NULL if the allocation fails.
*/

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *result;

    if (!(result = (char *)malloc(len + 1)))
        return (NULL);

    ft_bzero(result, len + 1);

    if ((int)start >= (int)ft_strlen(s))
        return (result);

    ft_memcpy(result, s+start, len);
    return (result);
}
