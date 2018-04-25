/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 18:28:21 by avan-ni           #+#    #+#             */
/*   Updated: 2018/04/25 18:59:02 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int check_double(char *s1, int i)
{
	int index;

	index = 0;
	while (index < i)
	{
		if (s1[index] == s1[i])
			return(0);
		index++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int i1;
	int i2;

	i1 = 0;
	i2 = 0;

	if (argc == 3)
	{
		while (argv[1][i1] != '\0')
		{
			while (argv[2][i2] != '\0')
			{
				if ((argv[1][i1] == argv[2][i2]) && check_double(argv[1], i1))
				{
					write(1, &argv[1][i1], 1);
					break;
				}
				i2++;
			}
			i2 = 0;
			i1++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
