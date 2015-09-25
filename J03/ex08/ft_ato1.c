/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/11 10:22:51 by gakles            #+#    #+#             */
/*   Updated: 2015/09/13 19:45:17 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int atoi;
	int i;

	atoi = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 47) && (str[i] < 58))
		{
			atoi = (atoi * 10) + (str[i] - 48);
		}
		i++;
	}
	return (atoi);
}