/*
    Controlador de contraseñas
        Deben ser claves numéricas
*/

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char password;
    printf("Ingrese una contraseña: ");
    scanf("%c", &password);

    if (isdigit(password))
    {
        printf("Válido");
    }
    else
    {
        printf("No válido");
    }

    return 0;
}