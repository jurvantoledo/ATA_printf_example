#include "ata_printf.h"

int main()
{
    ata_printf("Test zonder flag");

    /* test printf met chars */
    ata_printf("%c", 'D');
    ata_printf("%c", 'S');
    
    /* Test printf met strings */
    ata_printf("%s", "Test test!");
    ata_printf("%s", "asiudsuhfauhf8wdiwqjdiq9--0   1edpsod");

    /* Test printf met base 10 numbers */
    ata_printf("%d", 10);
    ata_printf("%i", 54634);
    ata_printf("%d", -1);
    ata_printf("%i", 2147483647);
    ata_printf("%d", 2147483648); // Zou -2147483647 moeten returnen

    /* Test printf met unsigned base 10 numbers */
    ata_printf("%u", 10);
    ata_printf("%u", -10); // zou 4294967286 moeten returnen
    return (0);
}