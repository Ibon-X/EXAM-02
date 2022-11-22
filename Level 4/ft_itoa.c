#include <stdlib.h>

int	ft_sign(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

int	ft_get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int	len;

	len = ft_get_len(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
		res[0] = '-';
	else if (n == 0)
		res[0] = '0';
	while (n != 0)
	{
		len--;
		res[len] = ft_sign(n % 10) + '0';
		n /= 10;
	}
	return (res);
}
