#include <unistd.h>
 
void    ft_putchar_n(char c, int i)
{
    while (i--)
    {
        write(1, &c, 1);
    }
}
 
void    repeat_alpha(char *s)
{
    while (*s)
    {
        if (*s >= 'A' && *s <= 'Z')
            ft_putchar_n(*s, *s + 1 - 'A');
        else if (*s >= 'a' && *s <= 'z')
            ft_putchar_n(*s, *s + 1 - 'a');
        else
            write(1, s, 1);
        s++;
    }
}
 
int     main(int ac, char **av)
{
    if (ac == 2)
        repeat_alpha(av[1]);
    write(1, "\n", 1);
    return (0);
}
