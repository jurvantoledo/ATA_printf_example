#include "../ata_printf.h"

int     ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

int    ata_putstr(char *str)
{
    if (!str)
		return (write(1, "(null)", 6));
    return(write(1, str, ft_strlen(str)));
}
