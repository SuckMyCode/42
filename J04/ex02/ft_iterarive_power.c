/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterarive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 16:01:28 by gakles            #+#    #+#             */
/*   Updated: 2015/09/08 19:09:44 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1 , &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = nb * - 1;
		ft_putchar('-');
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}


int		ft_iterarive_power(int nb, int power)
{
	int tmp;
	int p;

	p = 1;
	if ((nb > 0) && (power > 0))
	{
		tmp = nb * nb;
		while (p != power - 1)
		{
			tmp = tmp * nb;
			p++;
		}
		nb = tmp;
	}
	else if ((nb > 0) && (power == 0))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (nb);
}
