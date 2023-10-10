#include <stdio.h>
#include <math.h>
int main()
{
    /*
        Escribir un programa que determine el dia de la semana al ingresar numeros del 1 al 7
    */
    // Variables
    int dia;

    // Ingresar el dia de la semana
    printf("Ingrese un numero del 1 al 7: ");
    scanf("%d", &dia);

    // Verificar el dia de la semana
    // Si no es un número o es menor o mayor a 1
        switch (dia)
        {
        case 1:
            printf("El dia es Lunes");
            break;
        case 2:
            printf("El dia es Martes");
            break;
        case 3:
            printf("El dia es Miercoles");
            break;
        case 4:
            printf("El dia es Jueves");
            break;
        case 5:
            printf("El dia es Viernes");
            break;
        case 6:
            printf("El dia es Sabado");
            break;
        case 7:
            printf("El dia es Domingo");
            break;
        default:
            break;
        }
    


    return 0;
}