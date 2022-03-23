#include "vetor.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void mostra_linha()
{
    printf("\n ---------------------------------------\n\n");
}

void mostra_cabecalho ()
{
    printf("  ------ LEITURA DE VETORES ------\n");
}

void recebe_vetor (Vetor*_vet)
{
    printf("\n - Digite os valores do seu vetor :\n\n");
    for(int i=0; i<10; i++)
    {
        printf("  POSIÇÃO [%.2d]: ", i);
        scanf("%f", &_vet->vet[i]);
        fflush(stdin);
    }
}

void mostra_menu()
{
    printf("\n - Escolha uma das opções abaixo: \n\n");
    printf(" 1 - Mostrar vetor\n");
    printf(" 2 - Inverter vetor\n");
    printf(" 0 - Mostrar vetor\n\n");
    printf(" Opção: ");
}

void mostra_vetor_original (Vetor*_vet)
{

    system("cls");

    mostra_cabecalho();

    printf(" - Vetor com Posições e Tamanho originais: \n\n");

    for(int i=0; i<10; i++)
    {
        printf("  Vetor [%.2d]: %.2f\n", i, _vet->vet[i]);
    }

}

void mostra_vetor_invertido (Vetor*_vet)
{
    system("cls");

    mostra_cabecalho();

    printf(" - Vetor com Posições e Tamanho invertidos: \n\n");

    for(int i=10; i>0; i--)
    {
        printf("  Vetor [%.2d]: %.2f\n", i, _vet->vet[i-1]);
    }

}



