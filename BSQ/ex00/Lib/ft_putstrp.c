
#include "bsq.h"

void	ft_putstrp(char *str)
{
	int i;

	i = 0;
	if (str[i] != '\0')
	{
		write(1, str, ft_strlen(str));
		i++;
	}
	write(1, "\n", 1);
}
