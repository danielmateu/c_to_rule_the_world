
#include <stdio.h>
int main()
{
    // Crea un programa que calcule el indice de masa corporal de una persona
    // IMC = peso / altura^2
    // const IMC = {
    //     18.5 : "Bajo peso",
    //     24.9 : "Normal",
    //     29.9 : "Sobrepeso",
    //     34.9 : "Obesidad",
    // }
    // Variables
    float peso, altura, imc;
    // Introduce el peso
    printf("Introduce tu peso en kg: ");
    scanf("%f", &peso);

    // Introduce la altura
    printf("Introduce tu altura en m: ");
    scanf("%f", &altura);

    // Calcula el IMC
    imc = peso / (altura * altura);

    // Imprime el IMC
    printf("Tu IMC es: %.2f", imc);
    // Condicional con ternarias para imprimir el estado de la persona
    // imc < 18.5 ? printf("Bajo peso") : imc < 24.9 ? printf(" Normal")
    //                                 : imc < 29.9   ? printf(" Sobrepeso")
    //                                 : imc < 34.9   ? printf(" Obesidad")
    //                                 : printf(" Obesidad Morbida");

    if (imc < 18.5)
        printf("Bajo peso");
    else if (imc >= 18.5 && imc < 24.9)
        printf("Normal");
    else if (imc >= 24.9 && imc < 29.9)
        printf("Sobrepeso");
    else if (imc >= 29.9 && imc < 34.9)
        printf("Obesidad");
    else
        printf("Obesidad Morbida"
    return 0;
}