#include "ft_printf.h"

static int	count_len(int num)
{
	unsigned int	len;

	len = 0;
	if (num == 0)
		len++;
	if (num < 0)
		len++;
	while (num != 0)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

static char	*ft_itoa(int n)
{
	unsigned int	num;
	unsigned int	len;
	char			*res;

	num = n;
	len = count_len(n) + 1;
	res = (char *)malloc(len * sizeof(char));
	if (!res)
		return (NULL);
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		res[0] = '-';
		num = num * -1;
	}
	res[len - 1] = '\0';
	while (num != 0)
	{
		res[len - 2] = (num % 10) + '0';
		num = num / 10;
		len--;
	}
	return (res);
}

int ft_putnbr(int n)
{
    char *result;
    int i;

    result = ft_itoa(n);
    i = 0;
    while (result[i])
    {
        write(1, &result[i], 1);
        i++;
    }
    free(result);
    return (count_len(n));
}
