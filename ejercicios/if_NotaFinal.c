/*
    Realizar un programa que determine cual es la nota final de un alumno en una materia teniendo en cuenta que la nota final es el promedio de 2 examenes. (Obtener el promedio de los 2 examentes)
*/
#include <stdio.h>
int main()
{
    // Variables
    float nota1;
    float nota2;
    float notaFinal;
    // Pedir al usuario que ingrese la nota el primer examen
    printf("Ingrese la nota del primer examen: ");
    scanf("%f", &nota1);
    // Pedir al usuario que ingrese la nota el segundo examen
    printf("Ingrese la nota del segundo examen: ");
    scanf("%f", &nota2);
    // Calcular la nota final
    notaFinal = (nota1 + nota2) / 2;
    // Mostrar la nota final
    printf("La nota final es: %.2f", notaFinal);
    return 0;
}
