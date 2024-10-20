#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	size_t size;

	size = ft_strlen(s) + 1;
	while(s[size] != (char)c)
	{
		if(size == 0)
			return(NULL);
		size--;
	}
	return((char*)(s+size));
}

