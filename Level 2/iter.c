#include <unistd.h>

int	check(char *s, char c, int len)
{
	int 	i;

	i = 0;
	while (s[i] && (i < len || len == -1))
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	iter(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (!check(s1, s1[i], i) && check(s2, s1[i], -1))
			write (1, &s1[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
		iter(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
