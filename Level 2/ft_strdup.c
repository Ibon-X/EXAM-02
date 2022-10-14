#include <stdlib.h>

char    *ft_strdup(char *src)
{
	char	*new;
	int	len; 
	
	len = 0;
	while (src[len])
		len++;
	new = malloc(sizeof(*new) * (len + 1));
	if (!new)
		return (NULL);
	len = 0;
	while (src[len])
	{
		new[len] = src[len];
		len++;
	}
	new[len] = '\0';
	return (new);
}
