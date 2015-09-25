/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matchbis.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/12 22:10:38 by gakles            #+#    #+#             */
/*   Updated: 2015/09/13 15:09:58 by gakles           ###   ########.fr       */
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

int		match(char *s1, char *s2)
{
	if ((*s1 != '\0') && (*s2 == '*'))
		return ((match(s1 + 1, s2)) || (match(s1, s2 + 1)));
	if ((*s1 == '\0') && (*s2 == '*'))
		return (match(s1, s2 + 1));
	if ((*s1 == *s2) && (*s1 != '\0') && (*s2 != '\0'))
		return (match(s1 + 1, s2 + 1));
	if ((*s1 == *s2) && (*s1 == '\0') && (*s2 == '\0'))
		return (1);
	else
		return (0);
}

int		main(void)
{
	char str1[] = "Salut les gogoles";
	char str2[] = "Sa*** les*go**********************oles";

	ft_putnbr(match(str1, str2));
	return (0);
}
