/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/22 21:16:25 by gakles            #+#    #+#             */
/*   Updated: 2015/09/23 11:24:09 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libt.h"

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while ((str[i] >= 65) && (str[i] <= 90) && (str[i] != '\0'))
	{
		str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (((str[i] == ' ') || (str[i] == '+') || (str[i] == '-')) && (str[i] != '\0'))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "sAlUt lEs gEns";

	ft_putstr(ft_strcapitalize(str));
	return (0);
}
