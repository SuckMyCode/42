/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 07:26:28 by gakles            #+#    #+#             */
/*   Updated: 2015/09/17 22:25:39 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list *cursor;

	while (ac > 2)
	{
		while (cursor != 0)
		{
			cursor = cursor->next;
		}
		ft_create_elem(av[ac]);
		cursor->next = av;
		ac--;
	}
	return (t_list);
}
