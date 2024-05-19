/*
 *  Copies <n> - 1 chars from <src> into <dest>.
 *  Notes that this function guarantees to NUL-terminate the result and
 *  it is included in the return size.
 *
 *  @param <dest> pointer to string wich chars will be copied to.
 *  @param <src> pointer to the string from wich chars will be copied.
 *  @param <n> amount of chars to be copied including '\0'.
 *
 *  @return total length of the destination string.
*/

#include <stdio.h>
#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t n) {
	unsigned int i;

	if (n == 0)
		return (ft_strlen(src));

	i = 0;
	while (src[i] && i < (n - 1)) {
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (ft_strlen(src));
}
