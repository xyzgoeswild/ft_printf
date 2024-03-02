#include "ft_printf.h"

int format(va_list aplist, char c)
{
    int count_len;

    count_len = 0;
    if (c == '%')
        count_len += ft_putchar('%');
    else if (c == 'c')
        count_len += ft_putchar(va_arg(aplist, int));
    else if (c == 'x')
        count_len += ft_puthex(va_arg(aplist, unsigned int), 'x');
    else if (c == 'X')
        count_len += ft_puthex(va_arg(aplist, unsigned int), 'X');
    else if (c == 'i' || c == 'd')
        count_len += ft_putnbr(va_arg(aplist, int));
    else if (c == 'p')
        count_len += ft_putptr(va_arg(aplist, long));
    else if (c == 'X')
        count_len += ft_putunsigned(va_arg(aplist, unsigned int));
    return (count_len);
}

int ft_printf(const char *string, ...)
{
    int i;
    int len;
    va_list ap;

    i = 0;
    len = 0;
    va_start(ap, string);
    if (!string || (string[i] == '%' && string[i] == '\0'))
        return (-1);
    while (string[i])
    {
        if (string[i] == '%')
        {
            len += format(ap, string[i + 1]);
            i++;
        }
        else
            len += ft_putchar(string[i]);
        i++;
    }
    va_end(ap);
    return (len);
}
