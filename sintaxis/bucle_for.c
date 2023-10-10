
// Crear un programa que calcule el promedio de la nota de 10 estudiantes en un examen final

#include <stdio.h>
int main()
{
    float nota;
    float promedio = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Ingrese la nota del estudiante %d: ", i + 1);
        scanf("%f", &nota);
        promedio += nota;
    }

    promedio /= 10;

    printf("El promedio de las notas es: %.2f", promedio);

    return 0;
}