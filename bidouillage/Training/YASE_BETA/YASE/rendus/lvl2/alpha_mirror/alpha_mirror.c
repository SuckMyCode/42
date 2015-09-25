/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 11:16:55 by gakles            #+#    #+#             */
/*   Updated: 2015/09/25 15:09:50 by gakles           ###   ########.fr       */
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

	i = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] == ' ')
			i++;
		if ((argv[1][i] >= 97) && (argv[1][i] <= 122))
			ft_putchar(97 + (122 - argv[1][i]));
		if ((argv[1][i] >= 65) && (argv[1][i] <= 90))
			ft_putchar(65 + (90 - argv[1][i]));
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
