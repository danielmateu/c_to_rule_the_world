
// Calcular el dinero ingrsado de la venta total del dia
#include <stdio.h>
int main()
{
    float venta;
    float total = 0;

    do
    {
        printf("Ingrese el monto de la venta: ");
        scanf("%f", &venta);
        total += venta;
    } while (venta != 0);

    printf("El total de la venta del dia es: %.2f €", total);

    return 0;
}