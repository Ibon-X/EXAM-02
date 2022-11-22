#include <stdlib.h>
#include <stdio.h>

void	ft_fprime(int n)
{
	int div;

	div = 2;
	if (n == 1)
		printf("1");
	if (n <= 1)
		return ;
	while (div <= n)
	{
		if (n % div == 0)
		{
			printf("%d", div);
			if (n == div)
				return ;
			printf("*");
			n /= div;
			div = 1;
		}
		div++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
