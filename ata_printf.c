#include "ata_printf.h"

int ata_printf(const char *format, ...) 
{
    int i = 0;
    int j = 0;
    va_list arg;

    va_start(arg, format);
    while (format[i])
    {
        if (format[i] != '%' && format[i])
        {
            ata_putchar(format[i]);
            j++;
        }
        if (format[i] == '%')
        {
            i++;
            if (format[i] == 'c')
            {
                j += ata_putchar(va_arg(arg, int));
            }
            if (format[i] == 's')
            {
                j += ata_putstr(va_arg(arg, char *));
            }
            if (format[i] == 'd' || format[i] == 'i')
            {
                j += ata_putnbr(va_arg(arg, int));
            }
            if (format[i] == 'u')
            {
                j += ata_unsigned_putnbr(va_arg(arg, unsigned int));
            }
        }
        i++;
    }
    va_end(arg);
    write(1, "\n", 2);
    i = 0;
    return (j);
}
