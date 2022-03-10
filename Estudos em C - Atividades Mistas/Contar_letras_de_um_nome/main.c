//Digite um nome, calcule e mostre quantas letras tem.

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main () {

    setlocale(LC_ALL, "Portuguese");

    int cont = 0, tam, i;
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
        // Se a letra na posicão nome[i] for um espaco, adicione 1 ao contador.
        if (nome[i] == ' ')
        {
            cont++;
        }
    }

    // O Nome possui um total de (Tamanho total da string - Numero de espacos).
    printf("\n  - O Nome possui tamanho (sem espaços): %i \n", tam-cont);

    // O Nome possui um total de (Tamanho total da string).
    printf("  - O Nome possui tamanho (com espaços): %i \n\n", tam);

    return 0;
}
