#include "../ata_printf.h"

char    ata_putchar(char c)
{
    return(write(1, &c, 1));
}