/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 20:13:27 by gakles            #+#    #+#             */
/*   Updated: 2015/09/06 23:23:10 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, d);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_diviseur(char *str)
{
	int d++;

	d = 0;
	while (*str[d] != '\0')
	{
		d++;
	}
	return (d);
}




void	ft_putnbr(int nbr)
{
	int nbr = 
}


int		main(void)
{
	ft_putnbr(nbr)
	return (0);
}
