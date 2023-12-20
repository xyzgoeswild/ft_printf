/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 05:36:45 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/15 05:39:26 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(size_t c)
{
    int count;

    count = 0;
    count += ft_putstr("0x");
    count += ft_puthex(c, 'x');
    return (count);
}

int main()
{
    ft_putptr(123);
}