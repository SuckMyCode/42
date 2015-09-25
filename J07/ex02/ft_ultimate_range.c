/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 13:18:31 by gakles            #+#    #+#             */
/*   Updated: 2015/09/16 14:04:46 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr *= - 1;
		ft_putchar('-');
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

int		*ft_range(int **range, int min, int max)
{
	int i;
	int length;

	i = 0;
	length = max - min;
	range = (int**)malloc(sizeof(range) * (length + 1));
	if (min > max)
		return (0);
	while (min < max)
	{
		range[i] = min;
		min++;
	}
	return (range);
}
