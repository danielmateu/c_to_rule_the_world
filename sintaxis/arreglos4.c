#include <stdio.h>
#define NUM 6
int main()
{
    char nombre[NUM];
    gets(nombre); // gets() reads a string from stdin and stores it into the string pointed to by str.
    puts(nombre); // puts() writes the string pointed by str to stdout and appends a newline character ('\n').

    return 0;
}