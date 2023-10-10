#include <stdio.h>

#define ARRAY_SIZE 10

int main()
{
    int array[ARRAY_SIZE];
    printf("Ingrese %i numeros enteros:\n", ARRAY_SIZE);
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("\narray[%d] ", i);
        scanf("%i", &array[i]);
    }

    printf("El arreglo ingresado es: \n");
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        printf("%i ", array[i]);
    }

    return 0;
}