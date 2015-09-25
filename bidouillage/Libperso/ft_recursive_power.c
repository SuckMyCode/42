/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 20:16:21 by gakles            #+#    #+#             */
/*   Updated: 2015/09/07 21:36:26 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if ((nb < 0) || (power < 0))
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb) * ft_recursive_power(nb, power - 1);
}
