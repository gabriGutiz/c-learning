/*
 *  Check if <c> is alphabetic.
 *
 *  @param <c> a char.
 *
 *  @return non-zero if <c> is alphabetic, otherwise 0.
*/

#include "libft.h"

int ft_isalpha(int c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
        return (1);
    return (0);
}
