/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 03:28:23 by amuhsen-          #+#    #+#             */
/*   Updated: 2024/03/03 03:50:20 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(size_t n, char c)
{
	int		count;
	char	*base16;

	count = 0;
	if (c == 'x')
		base16 = "0123456789abcdef";
	else
		base16 = "0123456789ABCDEF";
	if (n < 16)
	{
		count += ft_putchar(base16[n % 16]);
		return (count);
	}
	if (n >= 16)
	{
		count += ft_puthex(n / 16, c);
		count += ft_putchar(base16[n % 16]);
	}
	return (count);
}
