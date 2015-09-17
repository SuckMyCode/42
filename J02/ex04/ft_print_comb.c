/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 10:17:20 by gakles            #+#    #+#             */
/*   Updated: 2015/09/04 14:46:31 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '1';
	c = '2';
	while ((c <= '9') && (b <= '8') && (a <= '7'))
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (a != '7')
		{
			ft_putchar(';');
			ft_putchar(' ');
		}
		c++;
		{
			if (c > '9')
				(c = ++b + 1);
			if (b >= '8')
				(b = ++a + 1);
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
