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
                j += ata_putchar(va_arg(arg, int));
            else if (format[i] == 's')
                j += ata_putstr(va_arg(arg, char *));
            else if (format[i] == 'd' || format[i] == 'i')
                j += ata_putnbr(va_arg(arg, int));
            else if (format[i] == 'u')
                j += ata_unsigned_putnbr(va_arg(arg, unsigned int));
            else if (format[i] == 'p') {
                write(1, "0x", 2);
                j += 2 + ata_putnbr_base_lower(va_arg(arg, unsigned long long));
            }
            else if (format[i] == 'x')
                j += ata_putnbr_base_lower(va_arg(arg, unsigned int));
            else if (format[i] == 'X')
                j += ata_putnbr_base_upper(va_arg(arg, unsigned int));
            else {
                write(1, "%", 1);
                j = j + 1;
            }
        }
        i++;
    }
    va_end(arg);
    return (j);
}
