#include <unistd.h>

void	epur_str(char *s)
{
	int flag;

	while (*s == ' ' || *s == '\t')
		s++;
	while (*s)
	{
		if (*s == ' ' || *s == '\t')
			flag = 1;
		if (!(*s == ' ' || *s == '\t'))
		{
			if (flag)
				write (1, " ", 1);
			flag = 0;
			write (1, s, 1);
		}
		s++;
	}
}

int 	main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write (1, "\n", 1);
	return (0);
}
