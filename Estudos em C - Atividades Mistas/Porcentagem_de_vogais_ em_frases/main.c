/*Escrever um programa que receba um nome
- Que conte o número de vogais existentes nele.
- O programa deverá imprimir o numero total de caracteres do nome
- Quantas vogais
- E a respectiva porcentagem das vogais em relação ao total de caracteres.*/

#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"");

    char frase[200];
    int i = 0, vogais = 0, tam = 0, A=0,E=0,I=0,O=0,U=0;
    double total, percentVogais = 0;

    printf("\n - Digite uma Frase : ");
    fgets(frase, 200, stdin);

    tam = strlen(frase);

    for (i = 0; i < tam; ++i)
    {
        if(frase[i] == 'A' || frase[i] == 'a')
        {
            ++vogais;
            ++A;
        }
        if(frase[i] == 'E' || frase[i] == 'e')
        {
            ++vogais;
            ++E;
        }
        if(frase[i] == 'I' || frase[i] == 'i')
        {
            ++vogais;
            ++I;
        }
        if(frase[i] == 'O' || frase[i] == 'o')
        {
            ++vogais;
            ++O;
        }
        if(frase[i] == 'U' || frase[i] == 'u')
        {
            ++vogais;
            ++U;
        }
    }

    total = 100.0/(tam-1);

    percentVogais = total*vogais;

    printf("\t\n ----- RESULTADO -----\n\n");

    printf(" - O Texto Possui :\n\n");
    printf("   %i Letra(s) 'A' \n", A);
    printf("   %i Letra(s) 'E' \n", E);
    printf("   %i Letra(s) 'I' \n", I);
    printf("   %i Letra(s) 'O' \n", O);
    printf("   %i Letra(s) 'U' \n", U);

    printf("\n Possuindo um total de %i Vogais dentre %i Caractéres.\n", vogais, tam-1);

    printf("\t\n --- ESPAÇO DO TEXTO ---\n");
    printf("\n Vogais : %.2lf%%\n", percentVogais);
    printf("\n Caractéres restantes : %.2lf%% \n", 100.0-percentVogais);


    return 0;
}
