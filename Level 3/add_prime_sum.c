#include <unistd.h>

int ft_atoi(char *s)
{
	int res;
	int sign;

	res = 0;
	sign = 1;
	if (*s == '-')
	{	
		sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		res *= 10;
		res += (*s - '0');
		s++;
	}
	return (res * sign);
}

void ft_putnbr(int n)
{
	char *num;

	num = "0123456789";
	if (n > 9)
		ft_putnbr(n / 10);
	write(1, &num[n % 10], 1);
}

int ft_is_prime(int n)
{
	int i;

	i = 2;
	while (i < n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void ft_add_prime_sum(int n)
{
	int i;
	int sum;

	i = 2;
	sum = 0;
	while (i <= n)
	{
		if (ft_is_prime(i))
			sum += i;
		i++;
	}
	ft_putnbr(sum);
}

int main(int ac, char **av)
{
	if (ac == 2)
		ft_add_prime_sum(ft_atoi(av[1]));
	else
		ft_putnbr(0);
	write (1, "\n", 1);
	return (0);
}
