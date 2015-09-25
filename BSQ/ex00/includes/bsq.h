/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gakles <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/24 17:57:46 by gakles            #+#    #+#             */
/*   Updated: 2015/09/24 18:15:17 by gakles           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <stdlib.h>
# include <unistd.h>

typedef int			t_bool;

typedef struct		s_list
{
	int				index;
	char			*tablob;
	int				tabi;
}					t_list;

typedef struct		s_var
{
	int				totwi;
	int				liwi;
	int				iwi;
	bool			err;
}					t_var;

typedef struct		s_char
{
	char			chavi;
	char			chapl;
	char			chaca;
}					t_char;

char				**ft_split(char *str, t_var *var);
void				ft_putstrp(char *str);
int					ft_strlen(char *str);
void				ft_printtab(char **tabstr);
int					ft_strlen(char *str);
char				*tab_test(void);
int					ft_strleng(char *str);
void				ft_putstr(char *str);
void				ft_putnbr(int nbr);
void				ft_putchar(char c);
void				zangdar(void);

#endif
