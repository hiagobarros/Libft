#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const char *ps;

	ps = (const char*)s;
	while(n)
	{
		if(*ps == (unsigned char)c)
			return((void *)ps);
		ps++;
		n--;
	}
	return(NULL);
}