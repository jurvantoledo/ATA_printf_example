#include "ata_printf.h"

int main()
{
    char str[100] = "Test met een void *";

    ata_printf("Test zonder flag\n");

    /* test printf met chars */
    ata_printf("--------------\n");
    ata_printf("Test met chars\n");
    ata_printf("%c", 'D');
    ata_printf("%c\n", 'S');
    ata_printf("%c\n", 'C');
    ata_printf("--------------\n");

    /* Test printf met strings */
    ata_printf("--------------\n");
    ata_printf("Test met strings\n");
    ata_printf("%s\n", "Test test!");
    ata_printf("%s\n", "asiudsuhfauhf8wdiwqjdiq9--0   1edpsod");
    ata_printf("--------------\n");

    /* Test printf met base 10 numbers */
    ata_printf("--------------\n");
    ata_printf("Test met base 10 numbers\n");
    ata_printf("%d\n", 10);
    ata_printf("%i\n", 54634);
    ata_printf("%d\n", -1);
    ata_printf("%i\n", 2147483647);
    ata_printf("%d\n", 2147483648); // Zou -2147483647 moeten returnen
    ata_printf("--------------\n");

    /* Test printf met unsigned base 10 numbers */
    ata_printf("--------------\n");
    ata_printf("Test met unsigned base 10 numbers\n");
    ata_printf("%u\n", 10);
    ata_printf("%u\n", -10); // zou 4294967286 moeten returnen
    ata_printf("--------------\n");

    /* Test printf met void * */
    ata_printf("--------------\n");
    ata_printf("Test met void * values\n");
    ata_printf("%p\n", *str);
    ata_printf("--------------\n");

    /* Test printf met base 16 number lower */
    ata_printf("--------------\n");
    ata_printf("Test met base 16 numbers lowercase\n");
    ata_printf("%x\n", 321134214);
    ata_printf("%x\n", 5);
    ata_printf("%x\n", 1223241);
    ata_printf("--------------\n");

    /* Test printf met base 16 number upper */
    ata_printf("--------------\n");
    ata_printf("Test met base 16 numbers uppercase\n");
    ata_printf("%X\n", 1323435213);
    ata_printf("%X\n", 123);
    ata_printf("%X\n", 15);
    ata_printf("%X\n", 2745);
    ata_printf("--------------\n");

    /* Test printf met %% */
    ata_printf("--------------\n");
    ata_printf("Test met dubbele '%''%'\n");
    ata_printf("%%");
    ata_printf("\n");
    ata_printf("--------------\n");

    return (0);
}