#include <stdlib.h>
#include <stdio.h>

void	ft_fprime(int n)
{
	int i;

	i = 2;
	if (n == 1)
		printf("1");
	if (n <= 1)
		return ;
	while (i <= n)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			if (n == i)
				return ;
			printf("*");
			n /= i;
			i = 1;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
