#include "../ata_printf.h"

static int	ft_length(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

unsigned int	ata_unsigned_putnbr(unsigned int n)
{
	char	t;
	int		nb_length;

	nb_length = n;
	// if (n == -2147483648)
	// {
	// 	ata_putstr("-2");
	// 	n = 147483648;
	// }
	// if (n < 0)
	// {
	// 	ata_putchar('-');
	// 	n = n * -1;
	// }
	if (n >= 0 && n <= 9)
	{
		t = n + '0';
		ata_putchar(t);
	}
	else
	{
		ata_putnbr(n / 10);
		ata_putnbr(n % 10);
	}
	return (ft_length(nb_length));
}