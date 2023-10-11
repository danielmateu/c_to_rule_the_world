/*
    FUNCION

    tipo nombreFuncion(tipo var){
        ACCION...
    }

    nombreFuncion(var); // Llamada a la funcion
*/

// Realizar una funcion que calcule el area de un triangulo

#include <stdio.h>
int areaTriangulo(int base, int altura){
    int area = (base * altura) / 2;
    return area;
}
int main(){

    int base, altura;

    printf("Ingrese la base del triangulo: ");
    scanf("%d", &base);
    printf("Ingrese la altura del triangulo: ");
    scanf("%d", &altura);

    int area = areaTriangulo(base, altura);

    printf("El area del triangulo es: %d", area);

    return 0;
}