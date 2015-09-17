/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/03 12:08:14 by gakles            #+#    #+#             */
/*   Updated: 2015/09/05 03:49:19 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_aff(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
}

void	ft_print_commas(char a, char b)
{
	if ((a <= '9') && (b <= '8'))
	{
	ft_putchar(',');
	ft_putchar(' ');
	}
}

void	ft_itr(char a, char b, char c, char d)
{
	while ((a <= '9') && (b <= '8') && (c <= '9') && (d <= '9'))
	{
		if (d <= '9')
		{
			ft_aff(a, b, c, d);
			d++;
			{
				ft_print_commas(a, b);
				{
					if (d > '9')
					{
						d = '0';
						c++;
						{
							if (c > '9')
							{
								c = '0';
								d = ++b + 1;
							}
						}
					}
				}
			}
		}
	}
}

void	ft_print_comb2(void)
{
	char a;
	char b;
	char c;
	char d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';

	ft_itr(a, b, c, d);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
