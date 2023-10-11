#include <stdio.h>

// funcion para el manejo de la calculadora
float calculadora(int a, int b, char operacion)
{
    int resultado;
    switch (operacion)
    {
    case '+':
        resultado = a + b;
        break;
    case '-':
        resultado = a - b;
        break;
    case '*':
        resultado = a * b;
        break;
    case '/':
        resultado = a / b;
        break;
    default:
        printf("Operacion no valida");
        break;
    }
    return resultado;
}

int main()
{
    int a, b;
    char operacion;
    printf("Ingrese la operacion que desea realizar: ");
    scanf("%c", &operacion);
    printf("Ingrese el primer numero: ");
    scanf("%d", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%d", &b);

    float resultado = calculadora(a, b, operacion);

    printf("El resultado es: %.1f", resultado);

    return 0;
}