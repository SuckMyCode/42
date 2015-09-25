#include "bsq.h"

char    **ft_split(char *str,t_var *var)
{
	int index;
	int i;
	int j;
	char **tab;

	index = 0;
	i = 0;
	j = 0;
	tab = (char**)malloc(sizeof(char*) * (ft_strlen(str) * 15 + 16/*line_nbr*/));
	tab[0] = (char*)malloc(16);
	if (tab == NULL)
		var->err = 1;
	while(index < 240)// totwi
	{
		while(str[index] != '\n' && index != ft_strlen(str))
			tab [i][j++] = str[index++];
		if (str[index] == '\n'&& index != ft_strlen(str))
		{
			tab[++i] = (char*)malloc(sizeof(char) * 16);//liwi
			j = 0;
			index++;
		}
		else if (index == ft_strlen(str))
		{
			tab[i][j] = '\0';
		}
	}	
	return(tab);
}