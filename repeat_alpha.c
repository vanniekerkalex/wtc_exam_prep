#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	
	int i;
	int count;

	count = -1;
	i = 0;


	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{	
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				while (++count < argv[1][i] - 64)
					ft_putchar(argv[1][i]);
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				while (++count < argv[1][i] - 96)
					ft_putchar(argv[1][i]);
			else
				ft_putchar(argv[1][i]);
			count = -1;
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
