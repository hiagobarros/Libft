#include "libft.h"

void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char *pdst;
	const char *psrc;

	if(!dst && !src)
		return(dst);
	pdst = (char *)dst;
	psrc = (char *)src;

	while (n)
	{
		*pdst++ = *psrc++;
		n--;
	}
	return(dst);
}