/*
 *  Copies <n> characters from memory area pointed by <src>
 *  to memory area pointed by <dest>, overlapping regions.
 *
 *  @param <dest> pointer to the block of memory to be copied to.
 *  @param <src> pointer to the block of memory to be copied.
 *  @param <n> number of bytes to be copied.
 *
 *  @return pointer to the destination memory.
*/

#include <stdio.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n) {
    unsigned int i;

    if (dest == NULL && src == NULL)
        return (NULL);

    if (dest < src) {
        for (i = 0; i < n; i++)
            ((char *)dest)[i] = ((char *)src)[i];
    } else {
        for (i = n; i > 0; i--)
            ((char *)dest)[i - 1] = ((char *)src)[i - 1];
    }
    return (dest);
}
