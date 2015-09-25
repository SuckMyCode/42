/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 21:09:05 by gakles            #+#    #+#             */
/*   Updated: 2015/09/22 21:16:00 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libt.h"

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 91) && (str[i] > 64))
			str[i] += 32;
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "SALUT LES GENS";

	ft_putstr(ft_strlowcase(str));
	return (0);
}
