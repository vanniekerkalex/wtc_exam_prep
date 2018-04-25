/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 16:38:38 by avan-ni           #+#    #+#             */
/*   Updated: 2018/04/25 17:36:08 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return(0);
}

int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int sum;

	sign = 1;
	i = 0;
	sum = 0;
	
	while (str[i] < '0' || str[i] > '9')
		i++;

	if (str[i - 1] == '-')
		sign = -1;
	
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
	}
	return (0);
}
