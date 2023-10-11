#include <stdio.h>
#include <math.h>
int main()
{
    double argumento, seno;
    printf("Ingrese un número: ");
    scanf("%lf", &argumento);
    seno = sin(argumento);
    printf("El seno de %.2lf es %.2lf", argumento, seno);
    return 0;
}