#include <unistd.h>

void	ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		write (1, &s, 1);
		s++;
	}
}
