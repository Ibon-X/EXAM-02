#include <unistd.h>

void	rot_13(char *s)
{
	while (*s)
	{
		if ((*s >= 'A' && *s <= 'M')
			|| (*s >= 'a' && *s <= 'm'))
			*s += 13;
		else  if ((*s >= 'N' && *s <= 'Z')
			|| (*s >= 'n' && *s <= 'z'))
			*s -= 13;
		write (1, s, 1);
		s++;
	}
}

int 	main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	write (1, "\n", 1);
	return (0);
}
