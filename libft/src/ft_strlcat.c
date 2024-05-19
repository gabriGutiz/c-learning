/*
 *  Append the contents of <src> into <dest> and returns the NUL-terminate.
 *  Notes that this function guarantees to NUL-terminate the result and
 *  it is included in the return size.
 *
 *  @param <dest> pointer to string which chars will be appended.
 *  @param <src> pointer to the string from wich chars will be copied.
 *  @param <n> amount of chars to be copied including '\0'.
 *
 *  @return total length of the destination string, in this case,
 *  the length <dest> plus the length of <src>.
*/

#include <stdio.h>
#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t n) {
    size_t slen;
	size_t dlen;
	size_t i;

    if (dest == NULL && n == 0)
        return (0);

    slen = ft_strlen(src);;
	dlen = 0;
	while (dest[dlen] && dlen < n)
		dlen++;
    
	i = 0;
	if (dlen < n) {
		while ((i + dlen) < (n - 1) && src[i]) {
			dest[i + dlen] = src[i];
			i++;
		}
		dest[i + dlen] = '\0';
	}
	return (dlen + slen);
}
