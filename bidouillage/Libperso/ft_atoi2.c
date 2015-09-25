/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 10:37:19 by gakles            #+#    #+#             */
/*   Updated: 2015/09/24 10:44:53 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libt.h"
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int atoi;
	int i;
	int j;

	atoi =0;
	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			j*= -1;
		if ((str[i] > 47) && (str[i] < 58))
			atoi = (atoi * 10) + (str[i] - 48);
		i++;
	}
	if ((atoi > 2147483647) || (atoi < -2147483648))
		return (0);
	return (j * atoi);
}

int		main(void)
{
	ft_putnbr(ft_atoi("\t\t\t\nadgr2344rgg"));
	ft_putchar('\n');
	ft_putnbr(atoi("\t\t\t\nadgr2344rgg"));
	return (0);
}

