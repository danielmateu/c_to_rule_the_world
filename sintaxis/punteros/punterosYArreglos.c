#include <stdio.h>
#include <ctype.h>

int main()
{
    char cadena[80], *pcadena;

    puts("Ingrese una cadena en mayúscula: ");
    gets(cadena);

    pcadena = cadena;

    puts("La cadena en minúscula es: ");
    while (*pcadena != '\0')
    {
        putchar(tolower(*pcadena));
        pcadena++;
    }

    return 0;
}