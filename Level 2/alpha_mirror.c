#include <unistd.h>

void	alpha_mirror(char *s)
{
	while (*s)
	{
		if (*s >= 'A' && *s <= 'Z')
			*s = 'Z' - *s + 'A';
		else if (*s >= 'a' && *s <= 'z')
			*s = 'z' - *s + 'a';
		write (1, s, 1);
		s++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		alpha_mirror(av[1]);
	write (1, "\n", 1);
	return (0);
}
