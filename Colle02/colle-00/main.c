/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/06 02:16:36 by gakles            #+#    #+#             */
/*   Updated: 2015/09/07 16:42:57 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	colle(int x, int y);

int		main(void)
{
	colle(5, 5);
	ft_putchar('\n');
	ft_putchar('\n');
	colle(1, 5);
	ft_putchar('\n');
	ft_putchar('\n');
	colle(1, 1);
	ft_putchar('\n');
	ft_putchar('\n');
	colle(5, 1);
	ft_putchar('\n');
	ft_putchar('\n');
	colle(4, 8);
	ft_putchar('\n');
	return (0);
}
