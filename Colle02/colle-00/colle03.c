/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle03.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/05 15:24:11 by gakles            #+#    #+#             */
/*   Updated: 2015/09/06 23:21:50 by npeglias         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_ligne1(int x, int y, int a, int b)
{
	while ((x >= 1) && (a <= x))
	{
		if (a == 1)
		{
			ft_putchar('A');
			a++;
		}
		else if (a == x)
		{
			ft_putchar('C');
			a++;
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('B');
			a++;
		}
	}
}

void	ft_ligne2(int x, int y, int a, int b)
{
	if (a == 1)
	{
		ft_putchar('B');
		a++;
	}
	while ((a > 1) && (a < x))
	{
		ft_putchar(' ');
		a++;
	}
		if (a == x)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
}

void	ft_ligne3(int x, int y, int a, int b)
{
	while ((x >= 1) && (a <= x))
	{
		if (a == 1)
		{
			ft_putchar('A');
			a++;
		}
		else if (a == x)
		{
			ft_putchar('C');
			a++;
			ft_putchar('\n');
		}
		else
		{
			ft_putchar('B');
			a++;
		}
	}
}

void	ft_colonne(int x, int y, int a, int b)
{
	ft_putchar('A');
	ft_putchar('\n');
	b++;
	while (b < y)
	{
		ft_putchar('B');
		ft_putchar('\n');
		b++;
	}
	if (y > 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
}

void	colle(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = 1;
	if (x == 1)
	{
		ft_colonne(x, y, a, b);
	}
	if (x > 1)
	{
		ft_ligne1(x, y, a, b);
		b++;
		while ((b > 1) && (b < y))
		{
			ft_ligne2(x, y, a, b);
			b++;
		}
	}
	if ((b == y) && (x != 1))
	{
		ft_ligne3(x, y, a, b);
	}
}
