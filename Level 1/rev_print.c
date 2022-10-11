#include <unistd.h>

void 	rev_print(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	while (len--)
	{	
		write (1, &s[len], 1);
	}
}

int main(int ac, char **av)
{
	if (ac == 2)
		rev_print(av[1]);
	write (1, "\n", 1);
	return (0);
}
