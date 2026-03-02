// Escreva um algoritmo que armazene em um vetor todos os números inteiros de 200 a 100 (em ordem decrescente). Após isso, o algoritmo deve imprimir todos os valores armazenados
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num[101], i;

    for (i = 0; i < 101; i++)
    {
        num[i] = 200 - i;
    }

    for (i = 0; i < 101; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}