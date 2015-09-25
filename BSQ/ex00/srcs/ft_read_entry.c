#include <sys/uio.h>
#include <sys/types.h>
#include <unistd.h>
#include "BSQ.h"

#define BUF_SIZE 10

int		read_entry_arg(void)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

   if (argc < 2)
   {
		ft_putstr("Missing file name.\n");
		return (0);
   }
   if (argc > 2)
   {
		ft_putstr("Too many arguments.\n");
		return (0);
   }
   fd = open(argv[1], O_RDONLY);
   if (fd == -1)
   {
		ft_putstr("Open failed, acces denied.\n");
		return (0);
   }
   while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	return (0);
}

int		read_entry_pipe(void)
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	fd = 0;

	fd = open(O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Open failed, acces denied.\n");
		return (0);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	return (0);
}

void	read_last_entry(void)
{
    
}
