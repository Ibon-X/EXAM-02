char	to_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

int	get_digit(char c, int digits_in_base)
{
	int	max_digit;

	if (digits_in_base <= 10)
		max_digit = digits_in_base + '0';
	else
		max_digit = digits_in_base - 10 + 'a';

	if ((c >= '0' && c <= '9') && c <= max_digit)
		return (c - '0');
	else if ((c >= 'a' && c <= 'f') && c <= max_digit)
		return (c + 10 - 'a');
	else
		return (-1);
}

int	ft_atoi_base(char *s, int s_base)
{
	int	digit;
	int	res;
	int	sign;

	res = 0;
	sign = 1;
	if (*s == '-')
	{
		sign *= -1;
		s++;
	}
	while ((digit = get_digit(to_lower(*s), s_base)) >= 0)
	{
		res *= s_base;
		res += digit;
		s++;
	}
	return (res * sign);
}
