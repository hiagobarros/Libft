#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char *x;

	x = s;
    while(n > 0)
    {
		*x = 0;
		x++;
		n--;
	}
}