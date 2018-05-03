/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 12:49:42 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/03 13:09:47 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print_bits(unsigned char octet)
{
		char bit[8];
		char c;
		int i;
		int num;

		c = '0';
		num = octet;
		i = 0;
		while (i < 8)
		{
			if(num % 2 == 0)
			{
				c = '0';
				num = num / 2;
			}
			else
			{
				c = '1';
				num = (num - 1) / 2;
			}
			bit[i] = c;
			i++;
		}
		i--;
		while (i >= 0)
		{
			write(1, &bit[i], 1);
			i--;
		}
}

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char result;

	result = ((((octet >> 0) & 1) << 7) | \
			 	(((octet >> 1) & 1) << 6) | \
			 	(((octet >> 2) & 1) << 5) | \
			 	(((octet >> 3) & 1) << 4) | \
			 	(((octet >> 4) & 1) << 3) | \
			 	(((octet >> 5) & 1) << 2) | \
			 	(((octet >> 6) & 1) << 1) | \
			 	(((octet >> 7) & 1) << 0));
			 return (result);
}

int		main(void)
{
	unsigned char hello = 33;

	 print_bits(reverse_bits(hello));
	return (0);
}
