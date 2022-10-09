#include <unistd.h>

int main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 2)
	{
		i = 0;
		while (av[1][i]) 
		{
			if (av[1][i] == 32 && (av[1][i + 1] >= 'A' && av[1][i + 1] <= 'z'))
				j = i + 1;
			i++;
		}
		while (av[1][j] >= 'A' && av[1][j] <= 'z')
		{
			write (1, &av[1][j], 1);
			j++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
