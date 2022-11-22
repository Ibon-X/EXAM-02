void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	j = 0;
	while (j < size)
	{
		i= 0;
		while (i < size)
		{
			if (tab[i] >= tab[j])
				ft_swap(&tab[j], &tab[i]);
			i++;
		}
		j++;
	}
}
