/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amuhsen- <borgiba85@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 03:28:18 by amuhsen-          #+#    #+#             */
/*   Updated: 2024/03/03 03:54:35 by amuhsen-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *string, ...);
int	ft_putnbr(int n);
int	ft_putchar(int c);
int	ft_puthex(size_t n, char c);
int	ft_putptr(size_t n);
int	ft_putstr(char *string);
int	ft_putunsigned(unsigned int n);

#endif
