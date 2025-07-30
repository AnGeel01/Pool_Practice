#include <unistd.h>

void    ft_print_numbers(void)
{
        char x = 47;
	while (++x < 58)
       	        write(1, &x, 1);
}
