int	ft_atoi(const char *s)
{
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	while (*s == 32 || (*s >= 9 && *s <= 13))
		s++;
	if (*s == '+' || *s == '-')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		res = (res * 10) + *s - '0';
		s++;
	}
	return (res * sign);
}
