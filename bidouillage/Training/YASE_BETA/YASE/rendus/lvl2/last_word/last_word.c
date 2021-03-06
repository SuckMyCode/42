/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 17:43:55 by gakles            #+#    #+#             */
/*   Updated: 2015/09/25 18:22:23 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int j;
	int k;

	k = 0;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][k] != '\0')
		k++;
	j = k - 1;
	while ((argv[1][j] != ' ') && (argv[1][j] != '\t'))
	{
		j--;
	}
	while (argv[1][j] != '\0')
	{
		write(1, &argv[1][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return (0);
}
