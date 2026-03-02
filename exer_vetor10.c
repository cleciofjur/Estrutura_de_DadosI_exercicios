// Escreva um algoritmo que armazene em um vetor todos os números ímpares do intervalo fechado de 1 a 100. Após isso, o algoritmo deve imprimir todos os valores armazenados.
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    int num[50], i, j=0;

    for (i = 1; i <= 100; i++)
    {
        if (i % 2 != 0) {
            num[j] = i;
            j++;
        }
    }

    for (i = 0; i < j; i++)
    {
        printf("%d\t ", num[i]);
    }


    return 0;
}