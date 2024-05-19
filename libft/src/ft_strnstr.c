/*
 *  Find the first occurrence of <find> in <s>, where the search is limited
 *  to the first <slen> characters of <s>.
 *
 *  @param <s> pointer to the string to be searched on.
 *  @param <find> pointer to the string to be searched.
 *  @param <slen> limit to search.
 *
 *  @return pointer to the first occurrence found.
*/

#include <stdio.h>
#include "libft.h"

char *ft_strnstr(const char *s, const char *find, size_t slen) {
    unsigned int i;
    unsigned int j;

    if (slen <= 0)
        return ((char *)s);

    i = 0;
    while (s[i] != 0) {
        j = 0;
        while (s[i+j] == find[j] && (i+j) < slen) {
            if (s[i+j] == 0 || find[j] == 0)
                return ((char *)s + i);
            j++;
        }

        if (find[j] == 0)
            return ((char *)s + i);
        i++;
    }
    return (0);
}
