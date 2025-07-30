#include <unistd.h>

void	ft_putstr(char *s)
{
	while(*s)
		write(1, s++, 1);
	write(1, "\n", 1);
}

int main(int ac, char **av)
{
	while(--ac)
	{
		ft_putstr(av[ac]);
	}
}
