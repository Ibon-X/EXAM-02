#include <stdio.h>
#include <stdlib.h>

void	do_op(char * n1, char c, char *n2)
{
	if (c == '+')
		printf("%i", (atoi(n1) + atoi(n2)));
	else if (c == '-')
		 printf("%i", (atoi(n1) - atoi(n2)));
	else if (c == '*')
		 printf("%i", (atoi(n1) * atoi(n2)));
	else if (c == '/')
		 printf("%i", (atoi(n1) / atoi(n2)));
	else if (c == '%')
		 printf("%i", (atoi(n1) % atoi(n2)));
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2][0], av[3]);
	printf ("\n");
	return (0);
}
