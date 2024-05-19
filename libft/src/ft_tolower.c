/*
 *  Get the lower of <c> character.
 *
 *  @param <c> character to get the lower.
 *
 *  @return the lower of the character.
*/

#include "libft.h"

int ft_tolower(int c) {
    if (c == '\0')
        return (0);
    else if (c >= 'A' && c <= 'Z')
        return (c + ('a' - 'A'));
    return (c);
}
