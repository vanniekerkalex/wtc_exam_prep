/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 14:31:27 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/03 21:22:51 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*void	ft_putnbr(int nbr)
{
	char c;

	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
	{
		c = nbr + 48;
		write(1, &c, 1);
	}
}*/

void ft_putchar(char c)
{
	write(1, &c, 1);
}


void	ft_putnbr(int n)
{
	if (n > 9)
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}

int ft_atoi(char *str)
{
	int sum = 0;
	int sign = 1;
	int i = 0;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
//	ft_putnbr(sum);	
	return(sum*sign);
}

int is_prime(int num)
{
	int i = 2;
	
	if (num == 1)
		return (1);
	while (i*i < num + 2)
	{
		if (num % i == 0)
			return (0);
		i++;
	}	
	return (1);
}

int main(int argc, char **argv)
{
	int nbr = 0;
	int sum = 0;

	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		nbr--;

		if (nbr <= 1)
		{
			write(1, "0\n", 2);
			return (0);		
		}
		while (nbr != 0)
		{
			if (is_prime(nbr))
				sum = sum + nbr;
			nbr--;	
		}
		ft_putnbr(sum);
		write(1,"\n",1);

	}	
	else
		write(1,"0",1);
	write(1,"\n",1);
	return (0);
}
