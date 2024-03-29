#include "../ata_printf.h"

static unsigned long long	ata_length(unsigned long long n)
{
	unsigned long long	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 16;
		i++;
	}
	return (i);
}

unsigned long long	ata_putnbr_base_upper(unsigned long long nb)
{
	char			*rep;

	rep = "0123456789ABCDEF";
	if (nb > 15)
	{
		ata_putnbr_base_upper(nb / 16);
		ata_putnbr_base_upper(nb % 16);
	}
	else
		ata_putchar(rep[nb % 16]);
	return (ata_length(nb));
}

unsigned long long	ata_putnbr_base_lower(unsigned long long nb)
{
	char			*rep;

	rep = "0123456789abcdef";
	if (nb > 15)
	{
		ata_putnbr_base_lower(nb / 16);
		ata_putnbr_base_lower(nb % 16);
	}
	else
		ata_putchar(rep[nb % 16]);
	return (ata_length(nb));
}
