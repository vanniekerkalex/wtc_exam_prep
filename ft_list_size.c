/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 18:12:43 by avan-ni           #+#    #+#             */
/*   Updated: 2018/05/03 18:17:36 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list list;
	int count;
	
	list = begin_list;
	count = 0;
	while (list != '\0')
	{
		count++;
		list = list>next;
	}
	return(count);
}
