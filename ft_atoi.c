#include "libft.h"
int ft_atoi(const char *str)
{
    int sign;
    int res;

    sign = 1;
    res = 0;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    if(*str == '+' || *str == '-')
    {
        if(*str == '-')
            sign = -1;
        str++;
    }

    while (ft_isdigit(*str))
    {
        res = ((*str - '0') + (res * 10));
        str++;
    }

    return (res * sign);
    
}