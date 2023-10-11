// Calculo de descuento

#include <stdio.h>
float calcular_descuento(float precio, float descuento)
{
    float precio_final = precio - (precio * descuento / 100);
    return precio_final;
}

int main()
{
    float precio, descuento, precio_con_descuento;
    printf("Ingrese el precio del producto: ");
    scanf("%f", &precio);

    printf("Ingrese el descuento: ");
    scanf("%f", &descuento);

    precio_con_descuento = calcular_descuento(precio, descuento);

    printf("El precio final es: %.2f", precio_con_descuento);

    return 0;
}
