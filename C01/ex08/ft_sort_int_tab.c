#include <stdio.h>
void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while(i < size)
	{
		j = i + 1;

		while(j < size)
		{
			if(tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

/*int main()
{
	int tab[] = {4, 42, 23, 2};
	ft_sort_int_tab(tab, 4);
	int i = 0;
	while(i < 4)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
