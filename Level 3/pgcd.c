#include <stdio.h>
#include <stdlib.h>

void	pgcd(int n1, int n2)
{
	int 	pgcd;
	int 	div;

	div = 1;
	if (n1 > 0 && n2 > 0)
	{
		while (n1 >= div || n2 >= div)
		{
			if (n1 % div == 0 && n2 % div == 0)
				pgcd = div;
			div++;
		}
		printf("%d", pgcd);
	}
	else 
		return ;
}
	
int main(int ac, char **av)
{
	if (ac == 3)
		pgcd(atoi(av[1]), atoi(av[2]));
	printf("\n");
	return (0);
}
