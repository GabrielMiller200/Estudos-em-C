//Receber um nome do teclado e imprimí-lo de trás pra frente.

#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"");

    char nome[30];
    int i , tam;

    printf("\n ----- DIGITE UM NOME -----\n\n");
    fgets(nome,30,stdin);

    tam = strlen(nome);
    printf("\nSeu nome ao contrario é :");
    for( i = tam; i >= 0; --i)
    {
        printf("%c", nome[i]);
    }


    return 0;
}
