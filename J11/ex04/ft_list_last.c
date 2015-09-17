/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 07:14:09 by gakles            #+#    #+#             */
/*   Updated: 2015/09/17 13:38:39 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list *elem_tmp;

	elem_tmp = begin_list;
	while (elem_tmp->next != 0)
	{
		elem_tmp = elem_tmp->next;
	}
	return (elem_tmp);
}
