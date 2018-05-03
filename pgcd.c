/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 19:58:01 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/03 20:24:44 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int a;
	int b;
	int max;
	int i;
	int ans;

	ans = 0;
	i = 1;
	
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);	

		if (a >= b)
			max = a;
		else
			max = b;
		
		if (a == 1 || b == 1)
			ans = 1;
		else if (a == 2 || b == 2)
			ans = 2;
		else
			while (i * i <= max + 2)
			{
				i++;
				if (a % i == 0 && b % i == 0)
					ans = i;
			}
		printf("%d", ans);
	}
	
	printf("\n");
	return (0);
}
