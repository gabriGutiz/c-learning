/*
 *  Copies the character <c> (an unsigned char)
 *  to the first <n> characters of the string pointed to,
 *  by the argument <str>.
 *
 *  @param <str> pointer to the block of memory to fill.
 *  @param <c> char to be set.
 *  @param <n> number of bytes to be set to <c>.
 *
 *  @return pointer to the destination memory area.
*/

#include <stdio.h>
#include "libft.h"

void *ft_memset(void *str, int c, size_t n) {
    unsigned int i;

    for (i = 0; i < n; i++)
        ((char *)str)[i] = c;
    return (str);
}
