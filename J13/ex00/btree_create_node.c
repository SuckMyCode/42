/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 17:54:04 by gakles            #+#    #+#             */
/*   Updated: 2015/09/19 18:45:42 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree		*btree_create_node(void *item)
{
	t_btree *new_node;

	new_node = (t_btree*)malloc(sizeof(new_node));
	if (!new_node)
		return (0);
	item = 0;
	return (item);
}
