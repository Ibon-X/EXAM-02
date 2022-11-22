#include <stdio.h>

void	swap_tab(int *tab, unsigned int n1, unsigned int n2)
{
	int	aux;

	aux = tab[n1];
	tab[n1] = tab[n2];
	tab[n2] = aux;
}

void    bubble_sort(int *tab, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < (size - 1))
		{	
			if (tab[j] > tab[j + 1])
				swap_tab(tab, j, (j + 1));
			j++;
		}
		i++;
	}
}

void	sort_int_tab(int *tab, unsigned int size)
{
	if (size <= 1)
		return ;
	bubble_sort(tab, size);
}

int	main()
{
	int 		tab[] = {8, 4, 5, 2, 10, 43, 1, 7, 35};
	unsigned int	size = 10;

	sort_int_tab(tab, size);

	int i;

	i = 0;
	while (i < size)
	{
		printf("%d\t", tab[i]);
		i++;
	}
	return (0);
}
