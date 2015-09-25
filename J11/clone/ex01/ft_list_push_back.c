/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 16:23:48 by gakles            #+#    #+#             */
/*   Updated: 2015/09/17 13:26:15 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem_tmp;

	elem_tmp = *begin_list;
	while (elem_tmp->next != 0)
	{
		elem_tmp = elem_tmp->next;
	}
	elem_tmp->next = ft_create_elem(data);
}
