## Common Instructions
-   Your project must be written in C.
-   Your functions should not quit unexpectedly (segmentation fault, bus error, double free, etc) apart from undefined behaviors.
-   All heap allocated memory space must be properly freed when necessary. No leaks
    will be tolerated.
-   MAX. 10 functions can be used to make ata_printf() work! This means you cant make more than 10 functions!
-   You can't use *ChatGPT* to ask for the answer, the idea of this exercise is to see if you like programming, 
    - Exceptions: if you want to ask what `va_list` is used for thats allowed! But please keep it to a minimum

### Mandatory part
**Description:**

Write a library that contains `ata_printf()`, this has to be a function that will mimic the original `printf()`
The original `printf()` is a formatting function that is used to print a string to stdout (Standard Output)
The basic idea to call printf in C is to provide a string of characters that need to be printed as it is in the program. 
The printf in C also contains a format specifier that is replaced by the actual value during execution.

*Allowed Files:*
> - *.h, *,c

*Allowed Headers:*
> - <stdio.h>
> - <unistd.h>
> - <stdlib.h>
> - <stdarg.h>

*External functions:*
> **This means these are the only functions you are allowed to use to make ft_printf work!!!**
> - malloc
> - free
> - write
> - va_start
> - va_arg
> - va_copy
> - va_end
> - putchar
> - puts
> - ata_putnbr (selfmade function)

> **ata_printf() has to work with the following conversions/flags:**
> - %c (Prints a single character.)
> - %s (Prints a string.)
> - %d (Print a decimal (base 10) number.)
> - %i (Prints an interger in base 10.)
> - %u (Prints an unsigned decimal (base 10) number.)

### Bonus
> **make ata_printf() also work with the following conversions/flags:**
> - %p (The void * pointer argument has to be printed in hexadecimal format.)
> - %x (Prints a number in hexadecimal (base 16) lowercase format.)
> - %X (Prints a number in hexadecimal (base 16) uppercase format)
> - %% (Prints a percent sign.)

**Tips:**
-   Bekijk eerst hoe de normal printf werkt, test printf() dus uit met wat flags zoals bijvoorbeeld:
        > printf("%c", 'c');
    En kijk wat er gebeurd!
-   Gebruik de manual in de terminal, als die te onduidelijk is (wat het vaak wel is!) 
    gebruik dan het internet -> Documentatie/Stack overflow of wat dan ook. Alles is toegestaan BEHALVE *ChatGPT*!!!
    Je kunt de manual in de terminal als volgt openen:
    > *Voorbeeld:*
    > - man printf
    > - man va_list (voor va_start, va_arg, va_copy, va_end)
    > - man malloc
-   Als je niet weet wat een functie zoals bijvoorbeeld ``puts()`` doet, bekijk dan eerst wat die functie doet voordat je het gaat gebruiken!
    Dit kun je als volgt doen:
    ```c
        int main()
        {
            puts("TEST");
            return (0);
        }
    ```

### Hoe run je een C programma:
- gebruik `gcc <file_name>` (Voorbeeld: gcc main.c)
- Als alles goed is gegaan komt er daarna een `./a.out` bestand
- run het `./a.out` bestand door het aan te roepen in je terminal

### Hoe werk je met een Makefile:
- Om het programma te runnen type je `make` in de terminal en de Makefile zal de rest voor je doen
- Om de .o files te verwijderen type je `make clean`, op deze manier verwijderd de make files alle aangemaakte .o files
- gebruik `make fclean` als je alle .o en de `ata_print` file wilt verwijderen.
- gebruik `make re` om alle .o files te verwijderen en opnieuw aan te maken (Kun je zien als de cache van je PC refreshen)

### Starter code:
in `ata_printf.c` file:
```c
    #include "ata_printf.h"

    int ata_printf(const char *format, ...) 
    {
        va_list arg;
    }
```

in `main.c` file:
```c
    #include "ata_printf.h"

    int main()
    {
        return (0);
    }
```

Andere files hoef je in principe niet aan te komen, tenzij je een nieuwe file aanmaakt. Dan zal je die moeten toevoegen aan de Makefile. De uiteindelijk functies in die file zul je ook moeten toevoegen aan de header file, indien dit nodig is roep er een docent bij!

###### Disclaimer:
**De bedoeling van deze opdracht is niet dat je het perfect maakt, het is meer bedoeld als indicatie voor jezelf om te kijken of dit iets is wat je leuk vindt om te doen, en voor ons om te kijken hoe snel iemand een nieuw concept op pakt!**