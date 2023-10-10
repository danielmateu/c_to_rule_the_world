// Escribir todos los números pares del 0 al 100

#include <stdio.h>
int main()
{
    for (int i = 0; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
