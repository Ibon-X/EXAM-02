#include <unistd.h>

int ft_atoi(char *s)
{
	int n;

	n = 0;
	while (*s)
	{
		n *= 10;
		n += (*s - '0');
		s++;
	}
	return (n);
}

void	printhex(int n)
{
	char *hex;

	hex = "0123456789abcdef";
	if (n >= 16)
		printhex(n / 16);
	write (1, &hex[n % 16], 1);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		printhex(ft_atoi(av[1]));
	}
	write (1, "\n", 1);
	return (0);
}
