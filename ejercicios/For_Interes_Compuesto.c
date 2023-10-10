// Ejercicio: Programar una calculadora de interes compuesto

#include <stdio.h>
int main()
{
    double dineroActual, adicionAnual, interesAnual = 0;
    int years = 0;

    printf("Ingrese el dinero actual: ");
    scanf("%lf", &dineroActual);

    printf("Ingrese la cantidad que va a agregar anualmente: ");
    scanf("%lf", &adicionAnual);

    printf("Durante cuantos años: ");
    scanf("%i", &years);

    printf("Ingrese el interes anual: ");
    scanf("%lf", &interesAnual);

    double total = dineroActual;

    for (int i = 0; i < years; i++)
    {
        total += adicionAnual;
        total += total * (interesAnual / 100);
    }

    printf("En %i años, el total es: %.2lf\n €", years, total);

    return 0;
}