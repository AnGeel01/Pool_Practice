#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			write(1, "-2147483648", 11);
			return;
		}
		ft_putchar('-');
		nb *= -1;
	}

	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);

	}
	else
		ft_putchar(nb + '0');
}


/*int main(void)
{
	ft_putnbr(0);
	ft_putchar('\n');

	ft_putnbr(42);
	ft_putchar('\n');

	ft_putnbr(-42);
	ft_putchar('\n');

	ft_putnbr(123456);
	ft_putchar('\n');

	ft_putnbr(-2147483648);
	ft_putchar('\n');

	ft_putnbr(2147483647);
	ft_putchar('\n');

	return 0;
}*/
