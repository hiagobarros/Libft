#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    int len = ft_strlen(s);
    write(fd,s,len);
}