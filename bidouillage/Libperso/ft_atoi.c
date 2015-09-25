/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 10:22:51 by gakles            #+#    #+#             */
/*   Updated: 2015/09/25 17:43:07 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libt.h"

int		ft_atoi2(char *str)
{
	int atoi;
	int i;
	int j;

	atoi = 0;
	i = 0;
	j = 1;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			j *= -1;
		if (str[i + 1] == '-')
			return (0);
		if ((str[i] == '+') && (str[i + 1] == '+'))
			return (0);
		if ((str[i] > 47) && (str[i] < 58))
			atoi = (atoi * 10) + (str[i] - 48);
		if ((str[i] >= 97) && (str[i] <= 122))
			break ;
		i++;
	}
	if ((atoi > 2147483647) || (atoi < -2147483648))
		return (0);
	return (j * atoi);
}

int		main(void)
{
	ft_putnbr(ft_atoi2("-+45"));
	ft_putchar('\n');
	ft_putnbr(atoi("-+45"));
	return (0);
}
