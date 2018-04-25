/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 18:19:26 by avan-ni           #+#    #+#             */
/*   Updated: 2018/04/25 18:28:10 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>


void hidenp(char *s1, char *s2, int size)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (s2[i] != '\n')
	{
		if (s1[count] == s2[i])
			count++;
		i++;
	}



}

int main(int argc, char **argv)
{
	int size;

	size = 0;
	if (argc == 3)
	{
		while (argv[1][size] != '\0')
			size++;

		hidenp(argv[1], argv[2], size);


	}
	write(1, "\n", 1);
	return (0);
}
