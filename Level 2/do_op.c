#include <stdio.h>
#include <stdlib.h>

void	do_op(char *s1, char c, char *s2)
{
	if (c == '+')
		printf("%i", (atoi(s1) + atoi(s2)));
	else if (c == '-')
		 printf("%i", (atoi(s1) - atoi(s2)));
	else if (c == '*')
		 printf("%i", (atoi(s1) * atoi(s2)));
	else if (c == '/')
		 printf("%i", (atoi(s1) / atoi(s2)));
	else if (c == '%')
		 printf("%i", (atoi(s1) % atoi(s2)));
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2][0], av[3]);
	printf ("\n");
	return (0);
}
