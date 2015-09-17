/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2bis.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/04 21:43:39 by gakles            #+#    #+#             */
/*   Updated: 2015/09/06 21:07:55 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_printnbrs(int a, int b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
}

void	ft_print_virgules(int a)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 00;
	b = 00;

	while (a <= 98)
	{
		while ((a <= 99) && (b <= 99))
		{
			ft_printnbrs(a, b);
			{
				if ((b <= 99) && (a <= 97))
					ft_print_virgules(b);
			}
			b++;
		}
		b = 00;
		b = ++a + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
