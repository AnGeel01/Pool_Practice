void ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	j = 0;
	while(j < size)
	{
		i = 0;

	while(i < size)
	{
		if(tab[i] > tab[j])
		{
			temp = tab[i];
			tab[i] = tab[j];
			tab[j] = temp;
		}
		i++;
	}
	j++;
	}

}
