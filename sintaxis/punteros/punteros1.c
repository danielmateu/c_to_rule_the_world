// Declaración de punteros
// Tipo *nombre_puntero;

// Un puntero es una variable que almacena la dirección de memoria de otra variable.

// Para declarar un puntero se utiliza el operador asterisco (*), que se coloca antes del nombre de la variable.

// El tipo de dato del puntero debe ser el mismo que el de la variable a la que apunta.

// Ejemplo:
#include <stdio.h>

int main()
{
    int num;
    int *puntero;

    num = 10;
    puntero = &num;

    printf("La direccion de memoria: %p", puntero);
    printf("\nEl valor de la variable: %d", *puntero);
    return 0;
}