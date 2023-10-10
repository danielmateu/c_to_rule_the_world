// Vamos a realizar un contador con el do while

#include <stdio.h>
int main()
{
    int contador = 0;
    do
    {
        contador++;
        printf("El contador es: %d\n", contador);
    } while (contador < 10);
    printf("El contador es: %d !!!", contador);
    return 0;
}