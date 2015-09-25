/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 13:23:02 by gakles            #+#    #+#             */
/*   Updated: 2015/09/24 17:33:50 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	l = 1;
	if (argc < 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	k = 0;
	while ((argv[l][i] >= 97) && (argv[l][i] <= 122))
	{
			k = (argv[l][i] - 97) + 1;
		j = 0;
		while (j < k)
		{
			ft_putchar(argv[l][i]);
			j++;
		}
		i++;
	}
	return (0);
}

