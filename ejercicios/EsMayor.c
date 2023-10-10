#include <stdio.h>
int main()
{
    // Al introducir la edad de una persona, saber si es mayor de edad
    // Variables
    int edad;
    // Pedir al usuario que ingrese la edad
    printf("Ingrese la edad: ");
    scanf("%d", &edad);
    // Verificar si es mayor de edad
    if (edad >= 18)
    {
        printf("Es mayor de edad");
    }else{
        printf("Es menor de edad");
    }

    return 0;
}