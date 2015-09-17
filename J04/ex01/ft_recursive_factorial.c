/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 12:57:49 by gakles            #+#    #+#             */
/*   Updated: 2015/09/07 20:07:59 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	if (nb < 1 || nb > 12)
		return (0);
	else
		return (nb) * ft_recursive_factorial(nb - 1);
}
