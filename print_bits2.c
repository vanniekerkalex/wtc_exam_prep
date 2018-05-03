/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 13:11:22 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/03 13:25:11 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i = 7;
	unsigned char bits;

	while (i >= 0)
	{
		bits = (((octet >> i) & 1) + '0');
		write(1, &bits, 1);
		i--;	
	}
}

int main(void)
{
	unsigned char c = 33;

	print_bits(c);
	return (0);
}
