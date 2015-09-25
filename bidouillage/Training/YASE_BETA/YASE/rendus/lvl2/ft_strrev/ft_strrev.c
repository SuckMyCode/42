/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/25 15:20:00 by gakles            #+#    #+#             */
/*   Updated: 2015/09/25 17:23:18 by gakles           ###   ########.fr       */
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
	write(1, str, ft_strlen(str));
}

void ft_swap(char *a, char *b)
{
	char tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
char *ft_strrev(char *str)
{
	int i = 0;
	int j = 0;
	int k;
	while(str[j] != '\0')
	{
		j++;
	}
	k = j - 1;
	while (i < (j / 2))
	{
		ft_swap(&str[i], &str[k]);
		i++;
		k--;
	}
	return(str);
}

int		main(void)
{
	char str[6] = "Salut";

	ft_putstr(ft_strrev(str));
	return (0);
}
