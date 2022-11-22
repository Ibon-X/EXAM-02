#include <unistd.h>

int	ft_atoi(char *s)
{
	int	res;

	res = 0;
	while (*s >= '0' && *s <= '9')
	{
		res *= 10;
		res += (*s - '0');
		s++;
	}
	return (res);
}

void	ft_putnbr(int n)
{
	char	*num;

	num = "0123456789";
	if (n > 9)
		ft_putnbr(n / 10);
	write (1, &num[n % 10], 1);
}

void	tab_mult(int n)
{
	int	i;

	i = 1;
	while (i < 10)
	{
		ft_putnbr(i);
		write (1, " x ", 3);
		ft_putnbr(n);
		 write (1, " = ", 3);
		ft_putnbr(i * n);
		write (1, "\n", 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		tab_mult(ft_atoi(av[1]));
	else
		write (1, "\n", 1);
	return (0);
}
