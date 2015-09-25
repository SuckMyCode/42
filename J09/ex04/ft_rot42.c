/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 09:07:44 by gakles            #+#    #+#             */
/*   Updated: 2015/09/13 20:47:00 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 97) && (str[i] <= 122))
		{
			str[i] += 16;
			if (str[i] > 122)
				str[i] -= 26;
		}
		if ((str[i] >= 65) && (str[i] <= 90))
		{
			str[i] += 16;
			if (str[i] > 90)
				str[i] -= 26;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	char str2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ\n";
	char str3[] = "Salut bande de gnioufs !\n";

	ft_putstr(ft_rot42(str));
	ft_putstr(ft_rot42(str2));
	ft_putstr(ft_rot42(str3));
	return (0);
}
