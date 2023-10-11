// Creamos un arreglo introduciendo manualmente sus valores
#include <stdio.h>
int main()
{
    char *frutas[5];
    frutas[0] = "🍓";
    frutas[1] = "🍌";
    frutas[2] = "🍍";
    frutas[3] = "🍎";
    frutas[4] = "🍊";

    for (int i = 0; i < 5; i++)
    {
        printf("%s ", frutas[i]);
    }
    return 0;
}