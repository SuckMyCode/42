/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   roTwane.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/13 19:19:55 by gakles            #+#    #+#             */
/*   Updated: 2015/09/25 11:32:39 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libt.h"

char	**ft_rot42(char **argv)
{
	int i;
	int j;

	i = 0;
	while (argv[i])
	{
		j = 0;
		while ((argv[i][j] >= 65) && (argv[i][j] <= 90))
		{
			argv[i][j] += 16;
			if (argv[i][j] > 90)
				argv[i][j] -= 26;
			j++;
		}
		while ((argv[i][j] >= 97) && (argv[i][j] <= 122))
		{
			if (argv[i][j] > 110)
				argv[i][j] -= 10;
			else
			{
				argv[i][j] += 16;
				if (argv[i][j] > 122)
					argv[i][j] -= 26;
			}
			j++;
		}
		i++;
	}
	return (argv);
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc < 1)
		return 0;
	while (argv[i] != '\0')
	{
		ft_rot42(argv);
		ft_putstr(argv[i]);
		ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
	return (0);
}
