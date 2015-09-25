#include "bsq.h"

char *tab_test(void)
{
	char *charfifteen;
	charfifteen = (char*)malloc(sizeof(char) * 241);

	charfifteen = "..x...........\n.....xx.......\n....xxx.......\n.x.x.x........\n..............\n...x.....x....\n..............\n.....x.....x..\n..............\n..x...........\n..............\n..x...........\n..............\n..............\n..x....x......\n........x.....\n";
	//ft_putstr(charfifteen);
	//ft_putnbr(ft_strleng(charfifteen));
    return (charfifteen);
}
