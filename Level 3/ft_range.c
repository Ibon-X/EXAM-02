int	absolute_value(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int     *ft_range(int start, int end)
{
	int	*res;
	int	i;
	int 	range;
	int 	step;

	range = 1 + absolute_value(end - start);
	res = malloc(sizeof(int) * range);
	if (!res) 
		return (NULL);
	if (start < end)
		step = 1;
	else
		step = -1;
	i = 0;
	while (range--)
	{
		res[i] = start;
		start += step;
		i++;
	}
	return (res);
}
