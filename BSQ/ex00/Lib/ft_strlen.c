#include "bsq.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	//ft_putstr("index du strlen = ");
	//ft_putnbr(i);
	//ft_putchar('\n');
	return (i);
}
