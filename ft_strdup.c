#include "libft.h"

static void ft_strcpy(char *dest,const char *src)
{
    size_t i;

	i = 0;
    while (src[i])
    {
        dest[i] = src[i];
		i++;
    }
    dest[i] = '\0';
}

char *ft_strdup(const char *s1)
{
    char *cpy;

    cpy = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if(!cpy)
		return(cpy);
    ft_strcpy(cpy, s1);
	return(cpy);
}