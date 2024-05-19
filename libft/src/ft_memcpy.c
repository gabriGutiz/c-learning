/*
 *  Copies <n> characters from memory area pointed by <src>
 *  to memory area pointed by <dest>.
 *
 *  @param <dest> pointer to the block of memory to fill.
 *  @param <src> pointer to the block of memory to be copied.
 *  @param <n> number of bytes to be copied.
 *
 *  @return pointer to the destination memory.
*/

#include <stdio.h>
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n) {
    unsigned int i;
    
    if (dest == NULL && src == NULL)
        return (NULL);

    for (i = 0; i < n; i++)
        ((char *)dest)[i] = ((char *)src)[i];
    return (dest);
}
