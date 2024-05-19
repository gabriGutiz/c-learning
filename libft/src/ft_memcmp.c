/*
 *  Compares at most the first <n> bytes of <str1> and <str2>.
 *
 *  @param <str1> pointer to the first memory area to be compared.
 *  @param <str2> pointer to the second memory area to be compared.
 *  @param <n> number of bytes to compared.
 *
 *  @return
 *      0 if the first <n> bytes of <str1> and <str2> are equal
 *      <0 if the fist character that does not match is greater in <str2> than in <str1>
 *      >0 if the fist character that does not match is greater in <str1> than in <str2>
*/

#include <stdio.h>
#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n) {
    unsigned int i;

    if (n == 0)
        return (0);

    i = -1;
    do {
        i++;
        if (((unsigned char *)str1)[i] != ((unsigned char *)str2)[i])
            return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
    } while (i+1 < n);
    return (0);
}
