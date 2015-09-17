/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/07 01:18:08 by gakles            #+#    #+#             */
/*   Updated: 2015/09/07 15:50:16 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_iterative_factorial(int nb)
{
	int		fact;

	fact = 1;
	while (nb != 0)
	{
		if ((nb > 0) && (nb < 12))
		{
			fact = fact * nb;
			nb--;
		}
		else
		{
			return (0);
		}
	}
	return (fact);
}
