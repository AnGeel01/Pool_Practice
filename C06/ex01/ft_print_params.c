#include <unistd.h>

int	main(int ac, char **av)
{
	(void)ac;

	int i, j;

	i = 1;
	while(av[i])
	{
		j = 0;
		while(av[i][j])
		{
			write(1, &av[i][j++], 1);
		}
		i++;
		write(1, "\n", 1);
	}
}
