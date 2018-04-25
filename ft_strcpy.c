#include <unistd.h>

char    *ft_strcpy(char *dst, char *src)
{
	int index;

	index = 0;
	while (src[index] != '\0') 
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\n';
	write(1, &*dst, index+1);
	return(dst);
}

int main(void)
{
	char src[] = "hello";
	char dst[] = "alexander";

	ft_strcpy(dst,src);
	return(0);
}
