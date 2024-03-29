#ifndef ATA_PRINTF_H

/**
 *  The <stdio.h> library is also included for making ata_putnbr to work
 *  DONT REMOVE IT!
 * -------------------------------
*/
#include <stdio.h>
/* -------------------------- */

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>

#define ATA_PRINTF_H

int     ata_putnbr(int n);
void    ata_putstr(char *str);
char    ata_putchar(char c);

int ata_printf(const char *format, ...);
 
#endif