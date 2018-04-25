/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 17:55:13 by avan-ni           #+#    #+#             */
/*   Updated: 2018/04/25 18:18:59 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char *temp;
	int i;

	i = 0;
	while (src[i] != '\0')
		i++;

	temp = (char *)malloc(sizeof(char) * i);
	
	i = 0;
	while(src[i] != '\0')
	{
		temp[i] = src[i];
		i++;
	}
	return(temp);
}


int main(int argc, char **argv)
{
	if (argc == 2)
		printf("%s\n", ft_strdup(argv[1]));
	return (0);
}
