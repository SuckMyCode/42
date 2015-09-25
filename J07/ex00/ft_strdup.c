/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 18:03:35 by gakles            #+#    #+#             */
/*   Updated: 2015/09/14 21:45:46 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
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

char	*ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	dest = (char*)malloc(sizeof(*src) * (ft_strlen(src)));
	if (!dest)
		return (0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
		return (dest);
}

int		main(void)
{
	char src[] = "gggggggggggggggggggggggggggggggggghohblj;nklirnoiro[igro[ihgr";
	char dest[] = "";
	ft_strdup(src);
	printf("%s", ft_strdup(src));
	ft_putstr(dest);
	return (0);
}
