// Escreva um algoritmo que armazene em um vetor todos os números inteiros de 100 a 1 (em ordem decrescente). Após isso, o algoritmo deve imprimir todos os valores armazenados.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num[100], i;

    // a condição permanece a mesma, porém decrementando dentro do laço
    for (i = 0; i < 100; i++)
    {
        // a cada execução decrementa, já que vai de 100 a 1
        num[i] = 100 - i;
    }

    for (i = 0; i < 100; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}