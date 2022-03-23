/*6) Faça um programa que leia 10 números reais e os armazene em um vetor.
Em seguida, leia um código inteiro e faça uma das ações abaixo:

0 - finaliza o programa;
1- imprime o vetor na ordem do início ao fim;
2 – imprime o vetor na ordem inversa (do fim para o início).

O programa deve funcionar até que o usuário digite 0 para finalizar.*/

#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"
#include <locale.h>

int main()
{

    int opc;

    Vetor * vetor = malloc(sizeof(Vetor));

    mostra_cabecalho();

    do
    {
        recebe_vetor(vetor);

        mostra_menu();
        scanf("%d", &opc);

        switch(opc)
        {
        case 0:
            system("cls");
            printf("\n\n\tFINALIZANDO PROGRAMA...\n\n\n");
            break;

        case 1:
            mostra_vetor_original(vetor);
            break;

        case 2:
            mostra_vetor_invertido(vetor);
            break;

        default:

            system("cls");

            printf("\n\n\tOPÇÃO INVALIDA!\n\n\n");

            system("Pause");

            system("cls");

            mostra_cabecalho();
        }
    }
    while(opc != 0);

    return 0;
}
