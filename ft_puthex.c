/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 05:20:12 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/15 05:38:28 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(size_t c, int s)
{
    char    *base;
    int     count;

    count = 0;
    if (s == 'x')
        base = "0123456789abcdef";
    if (s == 'X')
        base = "0123456789ABCDEF";
    if (c < 16)
    {
        count += ft_putchar(base[c % 16]);  
        return (count);     
    }
    if (c >= 16)
    {
        count += ft_puthex(c / 16, s);
        count += ft_putchar(base[c % 16]);
    }
    return (count);
}
