// Escreva um algoritmo que armazene em um vetor todos os números múltiplos de 5, no intervalo fechado de 1 a 500. Após isso, o algoritmo deve imprimir todos os valores armazenados
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num[100], i, j=0;

    for (i = 1; i <= 500; i++)
    {
        if (i % 5 == 0) {
            num[j] = i;
            j++;
        }
    }

    for (i = 1; i < j; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}