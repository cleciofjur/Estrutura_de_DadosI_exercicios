#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num[101], i;

    for (i = 0; i < 101; i++)
    {
        num[i] = 100 + i;
    }

    for (i = 0; i < 101; i++)
    {
        printf("%d ", num[i]);
    }

    return 0;
}