//Ler nome, endereço, telefone e imprimir

#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int telefone;
    char nome[30],endereco[100];

    printf("\t Escreva o seu nome: \n");
    scanf("%s", nome);

    printf("\t Escreva seu endereço: \n");
    scanf("%s", endereco);

    printf("\t Escreva o seu telefone: \n");
    scanf("%d", &telefone);

    printf("\t %s, %s, %d\n", nome, endereco, telefone);
    printf("\n\n");

    system("PAUSE");

    return 0;
}
