/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 09:56:53 by gakles            #+#    #+#             */
/*   Updated: 2015/09/25 18:18:58 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int i; 

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int k;

	k = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (((argv[1][k] == ' ') || (argv[1][k] == '\t')) && (argv[1][k] != '\0'))
		k++;
	while ((argv[1][k] != ' ') && (argv[1][k] != '\t') && (argv[1][k] != '\0'))
	{
		write(1, &argv[1][k], 1);
		k++;
	}
	write(1, "\n", 1);
	return (0);
}
