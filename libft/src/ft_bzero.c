/*
 *  Fills the first <n> bytes of the memory block
 *  pointed by <s> with zero bytes.
 *
 *  @param <s> pointer to the block of memory to fill.
 *  @param <n> number of bytes to be set to zero.
 *
 *  @return None.
*/

#include <stdio.h>
#include "libft.h"

void ft_bzero(void *s, size_t n) {
    unsigned int i;

    for (i = 0; i < n; i++)
        ((char *)s)[i] = '\0';
}
