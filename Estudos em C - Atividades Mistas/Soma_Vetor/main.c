#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int cont;
    float vetor[6], soma = 0;

    printf("\n\t!-- Digite 6 Valores --!\n\n");

    for (cont = 0; cont < 6; cont++) {
        printf(" Digite um Valor: ");
        scanf("%f", &vetor[cont]);
        soma = soma + vetor[cont];
    }

    printf("\n O Resultado da soma é %.2f\n\n", soma);

    system("pause");

    return 0;
}
