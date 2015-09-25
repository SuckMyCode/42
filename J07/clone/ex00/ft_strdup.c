/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 18:03:35 by gakles            #+#    #+#             */
/*   Updated: 2015/09/12 16:47:19 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(char *src)
{
	int i;
	char *dest;

	i = 0;
	dest = (char*)malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (!dest)
		return (0);
	while (i < src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
		return (dest);
}
