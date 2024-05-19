/*
 *  Converts <str> to an integer.
 *
 *  @param <str> pointer to the string to be converted.
 *
 *  @return the conversion result.
*/

#include <stdio.h>
#include "libft.h"

int ft_atoi(const char *str) {
    int i;
    int total;
    int signal;

    i = 0;
    total = 0;
    signal = 1;

    while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
        i++;

    if (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            signal *= -1;

    while (ft_isdigit(str[i]) != 0) {
        total = str[i] - '0' + total*10;
        i++;
    }

    return (total * signal);
}
