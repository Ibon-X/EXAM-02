#include <unistd.h>

int 	check(char *s, char c, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	unite(char *s1, char *s2)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	i--;
	k = 0;
	while (k <= i)
	{
		if (check(s1, s1[k], k) == 1)
			write (1, &s1[k], 1);
		k++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		unite(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
