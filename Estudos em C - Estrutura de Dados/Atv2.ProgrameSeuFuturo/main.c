#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que some o conteúdo de dois vetores de tamanho ?? e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.*/

int main()
{
    int vetTam, cont;

    printf(" ---------VETORES---------\n\n");
    printf(" Digite o tamanho do seu Vetor : ");

    scanf("%d", &vetTam);

    printf("\n Digite os valores do primeiro Vetor");
    printf("\n");

    int vetor[vetTam], vetor2[vetTam], vetor3[vetTam];

    for (cont = 0; cont < vetTam; cont++)
    {
        printf(" vetor [%d] : ", cont);
        scanf("%d", &vetor[cont]);
    }

    printf("\n Digite os valores do segundo Vetor");
    printf("\n");

    for (cont = 0; cont < vetTam; cont++)
    {
        printf(" vetor [%d] : ", cont);
        scanf("%d", &vetor2[cont]);
    }

    for (cont = 0; cont < vetTam; cont++)
    {
        vetor3[cont] = vetor[cont]+vetor2[cont];
    }

    printf("\n ----------------------------- \n");

    printf("\n VETOR 1 :\n\n");

    for (cont = 0; cont < vetTam; cont++)
    {
        printf(" vetor [%d] - %.2d%\n",cont, vetor[cont]);
    }

    printf("\n VETOR 2 :\n\n");

    for (cont = 0; cont < vetTam; cont++)
    {
        printf(" vetor [%d] - %.2d%\n",cont, vetor2[cont]);
    }

    printf("\n VETOR 3 :\n\n");

    for (cont = 0; cont < vetTam; cont++)
    {
        printf(" vetor [%d] - %.2d%\n",cont, vetor3[cont]);
    }

    printf("\n");

    system("pause");
    return 0;
}
