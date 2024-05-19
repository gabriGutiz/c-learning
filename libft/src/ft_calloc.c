/*
 *  Allocates <nitems> times <size> bytes in heap and sets to '\0'.
 *
 *  @param <nitems> number of items to be allocated.
 *  @param <size> size, in bytes, of each item.
 *
 *  @return a pointer to the allocated memory, with all bytes set to '\0'.
*/

#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nitems, size_t size) {
    void *allocd_mem;

    allocd_mem = (void *) malloc (nitems * size);
    if (allocd_mem == NULL)
        return (NULL);

    ft_bzero(allocd_mem, nitems * size);
    return (allocd_mem);
}
