#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ps1;
	const char	*ps2;

	ps1 = s1;
	ps2 = s2;
	while ((unsigned char)*ps1 == (unsigned char)*ps2 && n > 0)
	{
		ps1++;
		ps2++;
		n--;
	}
	return ((unsigned char)*ps1 - (unsigned char)*ps2);

}