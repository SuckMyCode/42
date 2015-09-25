/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/12 15:42:28 by gakles            #+#    #+#             */
/*   Updated: 2015/09/12 18:29:50 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strcat(char *dest, char *src)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while(src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	 dest[j + i] = '\0';
	 return (dest);
}

int		main(void)
{
	char *str1;
	char str2[40];

	str1 = "mec";
	str1 = ft_strcat(str2, str1);
	printf("%s",str1);
	return (0);
}
