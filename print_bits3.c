/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 20:24:53 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/03 20:43:10 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	print_bits(int n)
{
	if (n >= 2)
		print_bits(n / 2);
	n = n % 2;
	
	if (n < 2)
		n = n + '0';
	write(1, &n, 1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_bits(atoi(av[1]));
	write(1, "\n", 1);
	return (1);
}
