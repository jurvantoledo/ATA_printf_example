#include "ata_printf.h"

int ata_printf(const char *format, ...) 
{
    int i = 0;
    va_list arg;

    va_start(arg, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            
        }
        i++;
    }
    
    va_end(arg);
}
