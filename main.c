#include "libft.h"


int main(void)
{
    //printf("%d",ft_isalpha(65));
    //printf("%d",ft_atoi("   \n-100"));
    //printf("%d , %d",ft_isalnum(91), ft_isalnum(9));
    //printf("%d , %d",ft_isascii(-1), ft_isascii(127));
    //printf("%d , %d",ft_isprint(32), ft_isprint(127));
    //printf("%lu , %lu",ft_strlen("hello"), ft_strlen("helloworld"));
	//void *b = malloc(100);
	//unsigned char *i;
	/*unsigned char str[10];
	ft_memset(str,0,sizeof(str));*/
	/*char array[10];
	ft_bzero(array,sizeof(array));
	printf("%d",array[1]);*/
	/*char src[11] = "helloWorld";
	char *dst = (src+1);*/
	/*ft_memcpy(dst,src,sizeof(src));
	for(unsigned long i = 0; i < sizeof(src); i++)
		printf("%c",dst[i]);*/
	/*ft_memmove(dst,src,10);
	printf("%s , %s", dst, src);*/
	//char dst[9] = "hello";
	//char src[] = "world";
	/*size_t result;
	result = ft_strlcat(dst, src, sizeof(dst));
	printf("%s , result:%lu", dst, result);*/
	/*char *str = strchr(dst, 'l');
	printf("%s , %p",str, str);*/
	char s1[] = "test\200";
	char s2[] = "test\0";
	int n = 6;
	printf("bushin:%d\n", ft_strncmp(s1, s2, n));
	printf("original:%d\n", strncmp(s1, s2, n));



    return(0);
}