#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		ft_putchar(i + '0');
		i++;
	}
	return(0);
}
