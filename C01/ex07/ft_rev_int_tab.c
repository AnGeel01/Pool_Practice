void ft_rev_int_tab(int *tab, int size)
{
	int a = 0;
	int b = size - 1;
	int temp;

	while(a < size / 2)
	{
		temp = tab[a];
		tab[a] = tab[b];
		tab[b] = temp;
		a++;
		b--;
	}
}	
