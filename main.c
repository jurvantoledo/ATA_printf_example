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

    /* Test printf met cijfers */
    ata_printf("%d", 10);
    ata_printf("%i", 54634);
    ata_printf("%d", -1);
    ata_printf("%i", 2147483647);
    return (0);
}