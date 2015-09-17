/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 09:25:47 by gakles            #+#    #+#             */
/*   Updated: 2015/09/17 22:26:40 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		i;
	t_list	*elem_tmp;

	i = 0;
	elem_tmp = begin_list;
	if (elem_tmp == 0)
		return (0);
	while (i < nbr)
	{
		elem_tmp = elem_tmp->next;
		i++;
	}
	return (elem_tmp);
}
