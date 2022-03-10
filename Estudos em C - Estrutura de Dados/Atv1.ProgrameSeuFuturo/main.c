#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que preencha um vetor de inteiros de tamanho ?? pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor.
Por fim, imprima os dois vetores.*/

int main()
{
    int vetTam, cont;

    printf("\t---------VETORES---------\n\n");
    printf(" Digite o tamanho do seu Vetor : ");

    scanf("%d", &vetTam);

    printf("\n");

    int vetor[vetTam], vetor2[vetTam];

    for (cont = 0; cont < vetTam; cont++)
    {
        printf(" vetor [%d] : ", cont);
        scanf("%d", &vetor[cont]);
    }


    for (cont = 0; cont < vetTam; cont++)
    {
        vetor2[cont] = vetor[cont]*vetor[cont];
    }


    printf("\n VETOR AO QUADRADO0 :\n\n");

    for (cont = 0; cont < vetTam; cont++)
    {
        printf(" vetor [%d] : %.2d\n",cont, vetor2[cont]);
    }

    printf("\n");

    system("pause");
    return 0;
}
