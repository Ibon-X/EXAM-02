int		max(int* tab, unsigned int len)
{
	int 	result;
	int	i;

	result = 0;
	i = 0;
	while (i < len)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}
