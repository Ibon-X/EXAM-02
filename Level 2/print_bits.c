#include <unistd.h>
#include <stdlib.h>

void	print_bits(unsigned char octet)
{
	int	oct;
	int	div;

	div = 128;
	oct = octet;
	while (div != 0)
	{
		if (div <= oct)
		{
			write (1, "1", 1);
			oct = oct % div;
		}
		else 
			write (1, "0", 1);
		div /= 2;
	}
}

int main(int ac, char **av)
{
	int number;

	number = atoi(av[1]);
	if (ac == 2)
		print_bits(number);
	return (0);
}
