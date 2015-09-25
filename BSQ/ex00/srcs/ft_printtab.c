#include "bsq.h"

void	ft_printtab(char **tabstr)
{
	int i;

	i = 0;
	while (tabstr[i])
	{
		ft_putstrp(tabstr[i]);
		i++;
	}
}
