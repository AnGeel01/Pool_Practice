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

/*int main()
{
	int tab[] = {13, 23, 99, 10};
	ft_rev_int_tab(tab, 4);
	
	int i = 0;
	while(i < 4)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
