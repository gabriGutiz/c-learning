/*
 *  Allocates (with malloc(3)) and returns an array
 *  of strings obtained by splitting <s> using the
 *  character <c> as a delimiter. The array must end
 *  with a NULL pointer.
 *
 *  @param <s> the string to be split.
 *  @param <c> the delimiter character.
 *
 *  @return the array of new strings resulting from the split.
 *  NULL if the allocation fails.
*/

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c) {
    char **result;
    char *aux;
    char **auxresult;
    int i;
    int auxi;
    int start;
    int len;
    int resultlen;
    
    start = 0;
    len = 0;
    resultlen = 1;

    if (!(result = (char **)malloc(1)))
        return (NULL);

    for (i = 0; s[i]; i++) {
        if (s[i] == c) {

            free(aux);
            if (!(aux = (char *)malloc(len + 1)))
                return (NULL);
            ft_bzero(aux, len + 1);
            ft_memcpy(aux, s + start, len);

            if (resultlen == 1)
                result[0] = aux;
            else {
                free(auxresult);
                if (!(auxresult = (char **)malloc(resultlen)))
                    return (NULL);

                for (auxi = 0; i < resultlen; auxi++) {
                    auxresult[auxi] = result[auxi];
                }
                free(result);

                auxresult[resultlen - 1] = aux;

                if (!(result = (char **)malloc(resultlen)))
                    return (NULL);

                for (auxi = 0; i < resultlen; auxi++) {
                    result[auxi] = auxresult[auxi];
                }
                free(auxresult);
            }

            start = i;
            len = 0;
            resultlen++;
        }
        len++;
    }

    if (aux)
        free(aux);
    if (auxresult)
        free(auxresult);

    return (result);
}
