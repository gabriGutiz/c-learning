/*
 *  Duplicates, using malloc, the contents of <str>.
 *
 *  @param <str> string to be duplicate.
 *
 *  @return pointer to the duplicate string.
*/

#include "libft.h"

char *ft_strdup(const char *str) {
	unsigned int   strlength;
	char           *newstr;

	strlength = ft_strlen(str);
	newstr = ft_calloc((strlength + 1), sizeof(const char));
	if (newstr == NULL)
		return (NULL);

	newstr = ft_memcpy(newstr, str, strlength);
	return (newstr);
}
