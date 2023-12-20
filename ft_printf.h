/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 04:57:10 by amuhsen-          #+#    #+#             */
/*   Updated: 2023/12/15 05:28:24 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_putchar(int c);
int	ft_puthex(size_t c, int s);
int	ft_putnbr(int c);
int	ft_putptr(size_t c);
int	ft_putstr(char *c);
int	ft_putunsigned(unsigned int c);

#endif