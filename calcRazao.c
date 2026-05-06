#include <stdio.h>
#include <math.h>

void calcRazao (float num1, float num2, float *razao) {
    if (num2 == 0) {
        printf ("Não foi possivel realizar a operação!");
        return 0;
    }

    *razao = num1 / num2;
    return 1;
}

int main () {

    float n1, n2;
    float razao;

    printf ("Digite o 1º número: ");
    scanf ("%f", &n1);

    printf ("Digite o 2º número: ");
    scanf ("%f", &n2);

    calcRazao(n1, n2, &razao);

    printf ("\nResultado da divisão: %.2f", razao);

    return 0;
}
