// Escreva um algoritmo que armazene em um vetor o quadrado dos números ímpares no intervalo fechado de 1 a 20. Após isso, o algoritmo deve imprimir todos os valores armazenados
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    
    int num[10], i, j=0;

    for (i = 1; i <= 20; i++)
    {
        if (i % 2 != 0) {
            num[j] = i * i;
            j++;
        }
    }

    for (i = 0; i < j; i++)
    {
        printf("%d\t ", num[i]);
    }


    return 0;
}