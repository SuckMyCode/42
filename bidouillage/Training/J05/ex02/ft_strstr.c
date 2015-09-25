/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/21 11:48:10 by gakles            #+#    #+#             */
/*   Updated: 2015/09/21 15:07:00 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libt.h"

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while ((str[i + j] == to_find[j]) && (str[i + j] != '\0'))
		{
			j++;
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}

int		main(void)
{
	char *str = "Hello wor world boss";
	char *to_find = "world";

	ft_putstr(ft_strstr(str, to_find));
	return (0);
}
