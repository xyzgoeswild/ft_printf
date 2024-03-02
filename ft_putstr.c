#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int ft_putstr(char *string)
{
    int i;

    i = 0;
	if (!string)
	    return (write (1, "(null)", 6));
    while (string[i])
    {
        write(1, &string[i], 1);
        i++;
    }
    return (ft_strlen(string));
}
