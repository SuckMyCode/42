/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 10:08:01 by gakles            #+#    #+#             */
/*   Updated: 2015/09/17 18:10:29 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *tmp_begin;
	t_list *elem_tmp1;
	t_list *elem_tmp2;

	tmp_begin = *begin_list;
	elem_tmp1 = tmp_begin->next;
	elem_tmp2 = elem_tmp1->next;

	while (elem_tmp2 != NULL)
	{

}
