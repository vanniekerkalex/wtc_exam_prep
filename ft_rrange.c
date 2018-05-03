/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 18:19:30 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/03 20:48:16 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
	int size;
	int *num;

	size = abs(end - start);
		
	num = (int *)malloc((size + 1) * sizeof(int) + 1);

	while (size >= 0)
	{
		num[size] = start;
		if (start >= end)
			start--;
		else
			start++;
		size--;
	}
	return(num);
}

int abs(int n)
{
	if (n < 0)
		n *= -1;
	return(n);
}

int main(void)
{
	int start = 23;
	int end = -14;
	int i = 0;

	int *num = ft_rrange(start,end);

	while (i <= abs(end - start))
	{
		printf("%d", num[i]);
		i++;
	}
	return (0);
}
