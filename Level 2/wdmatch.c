#include <unistd.h>

void	ft_putchar(char *s)
{
	int	i;
	
	i = 0;
	while(s[i])
	{
		write (1, &s[i], 1);
		i++;
	}
}

void	wdmatch(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		if (s2[j] == s1[i])
			i++;
		j++;
	}
	if (!(s1[i]))
		ft_putchar(s1);
}

int	main(int ac, char **av)
{
	if (ac == 3)
		wdmatch(av[1], av[2]);
	write (1, "\n", 1);
	return (0);
}
