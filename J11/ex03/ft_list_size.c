/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 21:58:11 by gakles            #+#    #+#             */
/*   Updated: 2015/09/17 22:19:37 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*elem_tmp;

	i = 0;
	elem_tmp = begin_list;
	if (begin_list == 0)
		return (0);
	while (elem_tmp->next != 0)
	{
		elem_tmp = elem_tmp->next;
		i++;
	}
	i++;
	return (i);
}
