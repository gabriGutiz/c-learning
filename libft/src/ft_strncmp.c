/*
 *  Compares at most the first <count> bytes of <str1> and <str1>.
 *
 *  @param <str1> pointer to the first str to be compared.
 *  @param <str2> pointer to the second str to be compared.
 *  @param <count> number of bytes to compare.
 *
 *  @return
 *      0 if the first <count> bytes of <str1> and <str2> are equal
 *      <0 if the fist character that does not match is greater in <str2> than in <str1>
 *      >0 if the fist character that does not match is greater in <str1> than in <str2>
*/

#include <stdio.h>
#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n) {
    unsigned int i;

    if (n == 0)
        return (0);

    i = 0;
    while (str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i]) {
        if (i >= n - 1)
            return (0);
        i++;
    }
    return ((unsigned char)(str1[i]) - (unsigned char)(str2[i]));
}
