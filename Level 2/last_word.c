#include <unistd.h>

void	last_word(char *s)
{
	int i;
	int j;

	i = 0;
	while (s[i])
	{
		if ((s[i] == ' ' || s[i] == '\t')
			&& (s[i + 1] >= 'A' && s[i + 1] <= 'z'))
			j = i + 1;
		i++;
	}	
	while (s[j] > 'A' && s[j] <= 'z')
	{
		write (1, &s[j], 1);
		j++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		last_word(av[1]);
	write (1, "\n", 1);
	return (0);
}
