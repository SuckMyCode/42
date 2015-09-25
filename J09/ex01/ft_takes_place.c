/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/10 22:32:08 by gakles            #+#    #+#             */
/*   Updated: 2015/09/11 09:04:13 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if ((hour >= 1) && (hour < 11))
		printf("%d.00 A.M. AND %d.00 A.M.\n", hour, hour + 1);
	if (hour == 12)
		printf("12.00 P.M. and 01.00 P.M.\n");
	if ((hour > 12) && (hour < 23))
		printf("%d.00 P.M. AND %d.00 P.M.\n", hour - 12, hour - 11);
	if ((hour == 24) || (hour == 0))
		printf("12.00 A.M. and 01.00 A.M.\n");
	if (hour == 23)
		printf("11.00 P.M. AND 12.00 A.M.\n");
	if (hour == 11)
		printf("11.00 A.M. AND 12.00 P.M.\n");
}
