#include <unistd.h>

void	epur_str(char *s)
{
	int	flg;

	while (*s == 9 || *s == 32)
		s++;
	while (*s)
	{
		if (*s == 9 || *s == 32)
			flg = 1;
		if (!(*s == 9 || *s == 32))
		{
			if (flg)
				write (1, " ", 1);
			flg = 0;
			write (1, s, 1);
		}
		s++;
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		epur_str(av[1]);
	write (1, "\n", 1);
	return (0);
}
