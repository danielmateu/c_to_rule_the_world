/*
    Año bisiesto
        -numeros de 4 cifras
        -Son multiplos de 4 pero no multiplos de 100
        -Son multiplos de 400
*/

#include <stdio.h>
#include <math.h>

int bisiesto(int year)
{
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int year, continuar = 0, resultado;
    do
    {
        printf("Ingrese un año: ");
        scanf("%d", &year);
        if (year >= 1000 && year <= 9999)
        {
            continuar = 1;
        }
        else
        {
            printf("El año debe ser de 4 cifras\n");
        }
    } while (continuar == 0);

    resultado = bisiesto(year);

    if (resultado == 1)
    {
        printf("El año %d es bisiesto", year);
    }
    else
    {
        printf("El año %d no es bisiesto", year);
    }

    return 0;
}