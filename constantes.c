#include <stdio.h>
int main()
{
// Constantes
#define PI 3.1416;
#define NOMBRE "Dani";
#define EDAD 37;

    // variables
    float estatura  = 1.75;
    float sueldo    = 2500.50;
    float bono      = 500.50;

    sueldo += bono;

    printf("%f", sueldo);

    return 0;
}
