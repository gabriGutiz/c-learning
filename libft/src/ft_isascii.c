/*
 *  Check if <c> is ASCII.
 *
 *  @param <c> a char.
 *
 *  @return non-zero if <c> is ASCII, otherwise 0.
*/

#include "libft.h"

int ft_isascii(int c) {
    if (c >= 0 && c <= 127)
        return (1);
    return (0);
}
