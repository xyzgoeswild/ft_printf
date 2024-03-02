#include "ft_printf.h"

int ft_putptr(size_t n)
{
    int count_len;

    if (n == 0)
        ft_putstr("(nil)");
    count_len = ft_putstr("0x");
    count_len += ft_puthex(n, 'x');
    return (count_len);
}
