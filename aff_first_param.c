#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (int argc, char **argv)
{
	//	if (argc > 1)
	//	while(*argv[1])
	//		write(1, argv[1]++, 1);
	
	int index;

	index = 0;

	if (argc > 1)
        while(argv[1][index] != '\0')
	{
        	write(1, &argv[1][index], 1);
		index++;
	}


	write(1, "\n", 1);	
	return(0);
}
