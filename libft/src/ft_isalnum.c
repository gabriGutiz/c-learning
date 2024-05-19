/*
 *  Check if <c> is alphanumeric.
 *
 *  @param <c> a char.
 *
 *  @return non-zero if <c> is alphanumeric, otherwise 0.
*/

#include "libft.h"

int ft_isalnum(int c) {
    if (ft_isalpha(c) != 0 || ft_isdigit(c) != 0)
        return (1);
    return (0);
}
