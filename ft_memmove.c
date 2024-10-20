#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *pdst;
    const char *psrc;

    if(dst == src)
        return(dst);
	pdst = dst;
	psrc = src;

    if(dst < src)
    {
		while (len--)
			*pdst++ = *psrc++;
	}
	else
	{
		pdst += len - 1;
		psrc += len - 1;
		while (len--)
			*pdst-- = *psrc--;
	}
    return(dst);
}