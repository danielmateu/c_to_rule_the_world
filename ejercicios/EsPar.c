#include <stdio.h>
int main()
{
    // Realizar un programa que determine si un numero es par o impar
    int num;
    printf("Introduce un numero: ");
    /* `scanf("%d", &num);` is a function that reads an integer input from the user and stores it in
    the variable `num`. The `%d` format specifier is used to indicate that the input should be
    interpreted as an integer. The `&` operator is used to get the memory address of the variable
    `num` so that the input can be stored in that memory location. */
    scanf("%d", &num);

    // Verificar si el numero es par o impar
    if (num % 2 == 0)
    {
        printf("El numero es par");
    }
    else
    {
        printf("El numero es impar");
    }

    return 0;
}