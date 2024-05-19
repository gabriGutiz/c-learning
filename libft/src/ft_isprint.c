/*
 *  Check if <c> is a printable character.
 *
 *  @param <c> a char.
 *
 *  @return non-zero if <c> is printable, otherwise 0.
*/

#include "libft.h"

int ft_isprint(int c) {
    if (c >= 32 && c <= 126 && c != '\0')
        return (1);
    return (0);
}
