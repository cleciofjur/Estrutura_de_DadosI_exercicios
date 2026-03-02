// Escreva um algoritmo que armazene em um vetor os 100 primeiros números ímpares. Após isso, o algoritmo deve imprimir todos os valores armazenados
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num[100], i;

    for (i = 0; i < 100; i++)
    {
        num[i] = 2 * i + 1;
    }

    for (i = 0; i < 100; i++)
    {
        printf("%d\t", num[i]);
    }

    return 0;
}