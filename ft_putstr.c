/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 03:28:28 by amuhsen-          #+#    #+#             */
/*   Updated: 2024/03/03 03:47:58 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_putstr(char *string)
{
	int	i;

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
