// Escreva um algoritmo que armazene em um vetor todos os números inteiros de 0 a 50. Após isso, o algoritmo deve imprimir todos os valores armazenados.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num[51], i;

    // 1º for armazena os dados na estrutura
    for (i = 0; i <= 50; i++) {
        num[i] = i;
    }

    // 2º for apenas imprime os dados
    for (i = 0; i <= 50; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}