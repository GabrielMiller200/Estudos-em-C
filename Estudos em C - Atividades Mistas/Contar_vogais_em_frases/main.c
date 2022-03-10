//Receber do teclado uma mensagem e imprimir quantas letras A, E, I, O, U tem esta mensagem.

#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");

    int A = 0, E = 0, I = 0, O = 0, U = 0;
    int i, tam;
    char frase[201];

    printf("\n\t----- DIGITE UMA FRASE OU TEXTO : \n\n  - ");
    fgets(frase,201,stdin);

    tam = strlen(frase);

    for (i = 0; i < tam; ++i)
    {
        if(frase[i] == 'A' || frase[i] == 'a')
        {
            ++A;
        }
        if(frase[i] == 'E' || frase[i] == 'e')
        {
            ++E;
        }
        if(frase[i] == 'I' || frase[i] == 'i')
        {
            ++I;
        }
        if(frase[i] == 'O' || frase[i] == 'o')
        {
            ++O;
        }
        if(frase[i] == 'U' || frase[i] == 'u')
        {
            ++U;
        }
    }


    printf("\n\t --- ESTA FRASE CONTÉM : \n\n");

    printf("\t%i Letras \"A\" \n", A);
    printf("\t%i Letras \"E\" \n", E);
    printf("\t%i Letras \"I\" \n", I);
    printf("\t%i Letras \"O\" \n", O);
    printf("\t%i Letras \"U\" \n", U);

    return 0;
}
