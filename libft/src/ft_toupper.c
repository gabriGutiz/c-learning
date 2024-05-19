/*
 *  Get the upper of <c> character.
 *
 *  @param <c> character to get the upper.
 *
 *  @return the upper character.
*/

#include "libft.h"

int ft_toupper(int c) {
    if (c == '\0')
        return (0);
    else if (c >= 'a' && c <= 'z')
        return (c - ('a' - 'A'));
    return (c);
}
