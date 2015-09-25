/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/17 23:43:33 by gakles            #+#    #+#             */
/*   Updated: 2015/09/18 21:54:26 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libt.h"
#include <unistd.h>

int		main(void)
{
	char *str;

	write(1, *str, ft_strlen(str));
	ft_putstr("COUCOLESSALOPES");
	return (0);
}
