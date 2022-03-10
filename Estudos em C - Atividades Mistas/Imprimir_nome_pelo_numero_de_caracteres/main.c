/*Receber do teclado um nome e imprimir tantas vezes quantos
forem seus caracteres.*/

#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int cont = 0, tam,tamI , i = 0, j = 0;
    char nome[50];

    printf("\n\t----- DIGITE SEU NOME -----\n\n");
    printf("  - ");

    //scanf para strings inteiras.
    gets(nome);

    //armazena o tamanho da string em uma variável : tam.
    tam = strlen(nome);

    // Para i = 0, se i for menor que o tamanho da string, adicione 1 a i.
    for (i = 0; i < tam; ++i)
    {
        // Se a letra na posição nome[i] for um espaço, adicione 1 ao contador.
        if (nome[i] == ' ')
        {
            //conta quantos espaços possui na string
            cont++;
        }
    }

    //armazena o tamanho do nome sem contar os espaço.
    tamI = tam-cont;

    //faz um loop para imprimir o nome o numero de vezes o tamanho de letras sem contar espaço.
    for (j = 0; j < tamI; ++j)
    {
        printf("\t%s\n", nome);
    }

    system("pause");

    return 0;
}
