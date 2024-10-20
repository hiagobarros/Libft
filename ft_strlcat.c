#include "libft.h"



size_t ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
    size_t dst_len;
    size_t src_len;
	size_t i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
    while(src[i] && ((dst_len + i) < (dstsize - 1)))
	{
		dst[dst_len + i] = src[i];
		i++; 
	}
	dst[dst_len + i] = '\0';//if while start false this row will be redundant
	return(dst_len + src_len);//is it unsense sum two size_t type into return of size_t type ? 
}