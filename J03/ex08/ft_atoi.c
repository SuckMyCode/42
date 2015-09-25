/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 10:22:51 by gakles            #+#    #+#             */
/*   Updated: 2015/09/19 16:04:37 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		nbr = nbr * - 1;
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

int		ft_atoi(char *str)
{
	int atoi;
	int i;

	atoi = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 47) && (str[i] < 58))
		{
			atoi = (atoi * 10) + (str[i] - 48);
		}
		else
			break ;
		i++;
	}
	return (atoi);
}

int		main(void)
{
	char str[] = "734528aaaa34";

	ft_putnbr(ft_atoi(str));
	ft_putchar('\n');
	return (0);
}
