int	absolute_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int     *ft_range(int start, int end)
{
	int	i;
	int 	range;
	int	*res;
	int 	step;

	i = 0;
	range = 1 + absolute_value(end - start);
	res = malloc(sizeof(int) * range);
	
	if (!res) 
		return (NULL);
	if (start < end)
		step = 1;
	else
		step = -1;
	while (range--)
	{
		res[i] = start;
		start += step;
		i++;
	}
	return (res);
}
