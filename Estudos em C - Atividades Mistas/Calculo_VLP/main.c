
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    int /*Ano*/ N;
    int /*Juros*/ T;
    float /*valor em dinheiro*/ X, /*TOTAL*/ VLP, TEMP = 0, TOTAL;

    printf("\t--- CALCULO DE VLP ---\n\n");
    printf("Digite o valor do fluxo do caixa : ");
    scanf("%f", &X);
    printf("Digite a quantidade de juro : ");
    scanf("%d", &T);
    printf("Digite o tempo em anos : ");
    scanf("%d", &N);

    for(int i = 1; i <= N; i++)
    {
        TOTAL = pow((1+T),i);
        VLP = X/TOTAL;
        TEMP = TEMP + VLP;
    }
    printf("\n\t--- RESULTADO --- \n");
    printf("\t\nO valor do VLP do seu Projeto eh %.2lf\n\n",TEMP);


    return 0;
}
