/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 03:27:57 by amuhsen-          #+#    #+#             */
/*   Updated: 2024/03/03 03:51:08 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(size_t n)
{
	int	count_len;

	if (n == 0)
		return (ft_putstr("(nil)"));
	count_len = ft_putstr("0x");
	count_len += ft_puthex(n, 'x');
	return (count_len);
}
