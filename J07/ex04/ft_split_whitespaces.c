/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/19 12:30:00 by gakles            #+#    #+#             */
/*   Updated: 2015/09/19 15:39:14 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str)
{
	char **words;
	int i;
	int j;
	int k;

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		k = 0;
		while ((str[i] != ' ') || (str[i] != '\t') || (str[i] != '\n'))
		{
			words[k][j] = str[i];
			i++;
			j++;
		}
		words[k][j] = '\0';
		k++;
		i= i + 1;
	}
	return (words);
}

int		main(void)
{
	ft_split_whitespaces("Salut gros");
	return (0);
}
