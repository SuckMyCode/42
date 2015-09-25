/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 09:09:35 by gakles            #+#    #+#             */
/*   Updated: 2015/09/17 13:44:37 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	while (begin_list != NULL)
	{
		begin_list = begin_list->next;
		free(begin_list);
	}
}
