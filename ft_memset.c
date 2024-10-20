#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *bbushin;

	bbushin = b;
	while(len > 0)
	{
		*bbushin = (unsigned char)c;
		bbushin++;
		len--;
	}
	return(b);
}