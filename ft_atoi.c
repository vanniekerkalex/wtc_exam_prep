/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 16:38:38 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/03 14:23:49 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return(0);
}

int is_space(char c)
{
	if (c == ' ' ||
			c == '\f' ||
			c == '\n' ||
			c == '\r' ||
			c == '\t' ||
			c == '\v')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int sum;

	sign = 1;
	i = 0;
	sum = 0;
	
	while (is_space(str[i]))
		i++;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	
	while (is_digit(str[i]))
	{
		sum = (sum * 10) + (str[i] - '0');
		i++;
	}
	return(sum*sign);
}


int main(int argc, char **argv)
{
	
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
		printf("%d", atoi(argv[1]));
	}
	return (0);
}
