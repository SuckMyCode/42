/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/05 18:34:34 by gakles            #+#    #+#             */
/*   Updated: 2015/09/19 16:17:19 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str != '\0')
	{
		i++;
	}
	return (i);
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

char	*ft_strrev1(char *str)
{
	if (*str != '\0')
	{
		ft_strrev1(str + 1);
	}
	ft_putchar(*str);
	return (str);
}

char	*ft_strrev(char *str)
{
	char *tmp[ft_strlen(str)];
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (str[i])
	{
		*tmp[j] = str[i];
		i--;
		j++;
	}
	*tmp[j] = '\0';
	str = *tmp;
	return (str);
}



int		main(void)
{
	char str[] = "Salut bande de gnioufs\n";
	ft_strrev1(str);
	ft_strrev(str);
	return (0);
}
