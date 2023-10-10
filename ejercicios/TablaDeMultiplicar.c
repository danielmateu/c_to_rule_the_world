// Tabla de multiplicar
#include <stdio.h>
int main()
{
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);
    for (int i = 0; i <= 10; i++)
    {
        // printf("%d x %d = %d\n", numero, i, numero * i);
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }
    return 0;
}
