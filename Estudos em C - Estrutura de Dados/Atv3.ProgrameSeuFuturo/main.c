#include <stdio.h>
#include <stdlib.h>

/*Fa�a um programa que some o conte�do de dois vetores de tamanho ?? e armazene o resultado
em um terceiro vetor. Imprima os tr�s vetores na tela.*/

int main()
{
    int vetTam, cont;

    printf(" ---------VETORES---------\n\n");
    printf(" Digite o tamanho do seu Vetor : ");

    scanf("%d", &vetTam);

    printf("\n Digite os valores do primeiro Vetor");
    printf("\n");

    int vetor[vetTam], vetor2[vetTam];

    for (cont = 0; cont < vetTam; cont++)
    {
        printf(" vetor [%d] : ", cont);
        scanf("%d", &vetor[cont]);
    }

    for (cont = 0; cont < vetTam; cont++)
    {
        vetor2[cont] = vetor[(vetTam-1)-cont];
    }

    printf("\n ----------------------------- \n");

    printf("\n VETOR ORIGINAL :\n\n");

    for (cont = 0; cont < vetTam; cont++)
    {
        printf(" vetor [%d] - %.2d\n",cont, vetor[cont]);
    }

    printf("\n VETOR INVERSO :\n\n");

    for (cont = 0; cont < vetTam; cont++)
    {
        printf(" vetor [%d] - %.2d\n",cont, vetor2[cont]);
    }

    printf("\n");

    system("pause");
    return 0;
}
