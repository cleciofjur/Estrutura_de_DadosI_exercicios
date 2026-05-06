// A função recebe dois valores e para fazer a operação ela aponta para as variaveis de operação
#include <stdio.h>
#include <math.h>

// Função que não retorna nada a não ser que chame
void calc (int num1, int num2, int *soma, int *diferenca, int *produto) { //O * é o ponteiro para onde as operações vão apontar

    *soma = num1 + num2;

    *diferenca = num1 - num2;

    *produto = num1 * num2;
}

int main () {
    // A variavel nao pode ter o mesmo identificador da função
    int n1, n2;
    int soma, diferenca, produto;

    printf ("Digite o 1º número: ");
    scanf ("%d", &n1);

    printf ("Digite o 2º número: ");
    scanf ("%d", &n2);

    // Fazendo o calculo da expressão dentro da função com os dados que o usuário informou
    calc (n1, n2, &soma, &diferenca, &produto);

    printf ("Soma: %d \n", soma);
    printf ("Diferença: %d \n", diferenca);
    printf ("Produto: %d \n", produto);

    return 0;
}
