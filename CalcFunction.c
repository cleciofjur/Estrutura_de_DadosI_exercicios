#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

// Declaração das funções operacionais: Soma, Subtração, Multiplicaçção e Divisão
float soma (float num1, float num2) {
    return num1 + num2;
}

float subtracao (float num1, float num2) {
    return num1 - num2;
}

float multiplicacao (float num1, float num2) {
    return num1 * num2;
}

float divisao (float num1, float num2) {
    // Verifica se o divisor é diferente de zero
    if (num2 != 0) {
        return num1 / num2;
    } else {
        printf ("Operação Inválida");
        return 0;
    }
}

// Função principal
int main () {
    setlocale (LC_ALL, "pt_BR.UTF-8");

    // Declaração de varivéis
    float num1, num2, resultado;
    int op;

    // Pede ao usuário os números e a operação
    printf ("Digite um número: ");
    scanf ("%f", &num1);

    printf ("Digite uma operção:\n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
    scanf ("%d", &op);

    printf ("Digite um número: ");
    scanf ("%f", &num2);

    // Verifica qual a operação e faz o calculo por meio da chamada da funçção
    if (op == 1) {
        resultado = soma(num1, num2);
    } else if (op == 2) {
        resultado = subtracao(num1, num2);
    } else if (op == 3) {
        resultado = multiplicacao(num1, num2);
    } else if (op == 4) {
        resultado = divisao(num1, num2);
    } else {
        printf ("Operação Inválida\n ");
    }

    // Exibe o valor do cálculo
    printf ("Resultado: %.2f", resultado);

    return 0;
}