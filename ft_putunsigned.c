/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 05:14:29 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/15 05:19:38 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	count(size_t num)
{
	unsigned int	len;

	len = 1;
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

static char	*ft_itoa(unsigned int n)
{
	long	num;
	long	len;
	char			*res;

	num = n;
	len = count(n);
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
int	ft_putunsigned(unsigned int c)
{
    char    *rizz;

    rizz = ft_itoa(c);
    ft_putstr(rizz);
    free(rizz);
    return (count(c));
}