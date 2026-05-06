#include <stdio.h>
#include <math.h>

int CJ (float num1, float num2, float *clecio) {
    if (num2 == 0) {
        //printf ("Não foi possivel realizar a operação!");
        return 0;
    }

    *clecio = num1 / num2;
    return 1;
}

int main () {

    float ferreira, silva;
    float clecio;
    int control;

    printf("Digite 1 para acessar o sistema ou 0 para sair: ");
    scanf ("%d", &control);

    do {
        printf ("Digite o 1º número: ");
        scanf ("%f", &ferreira);

        printf ("Digite o 2º número: ");
        scanf ("%f", &silva);

        CJ(ferreira, silva, &clecio);

        int retorno = CJ(ferreira, silva, &clecio);

        if (retorno) {
            printf ("\nResultado da divisão: %.2f\n", clecio);
        } else {
            printf ("Resultado inconsistente\n");
        }

        printf("\nDigite 1 ou 0 para sair: ");
        scanf ("%d", &control);
    }while (control != 0);

    return 0;
}
