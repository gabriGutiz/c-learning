/*
 *  Check if <c> is numeric.
 *
 *  @param <c> a char.
 *  
 *  @return non-zero if <c> is numeric, otherwise 0.
*/

#include "libft.h"

int ft_isdigit(int c) {
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}
