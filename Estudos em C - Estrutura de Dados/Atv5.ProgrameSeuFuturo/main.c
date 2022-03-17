/*5) Faça um programa que receba a temperatura média de cada mês do ano, armazenando-as em um
vetor. Ao final, mostre a maior e a menor temperatura do ano e em que mês ocorreram (mostrar o
mês por extenso: janeiro, fevereiro ...)*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _mes
{   char nome[12][10];
    float temp[12];
} Meses;

int main()
{
    char Nome_meses[12][10] = {"Janeiro",
                               "Fevereiro",
                               "Marco",
                               "Abril",
                               "Maio",
                               "Junho",
                               "Julho",
                               "Agosto",
                               "Setembro",
                               "Outubro",
                               "Novembro",
                               "Dezembro"};
    float aux = 0;

    Meses * meses = malloc(sizeof(Meses));

    printf("\t ----- TEMPERATURA MEDIA ----- \n\n");
    printf(" -- Digite a temperatura dos meses abaixo -- \n\n");

    for (int i = 0; i<12; i++)
    {
        strcpy(meses->nome[i], Nome_meses[i]);

        printf(" - %s : ", meses->nome[i]);
        scanf("%f", &meses->temp[i]);
        fflush(stdin);
    }


    printf("\n\n --------------------------------------- \n");
    printf(" -- Temperatura mais alta registrada -- \n");

    for (int i = 0; i<12; i++)
    {
        if (aux < meses->temp[i])
        {
            aux = meses->temp[i];
        }
    }

    printf("\n Temperatura: ");
    printf("%.1f Graus\n\n", aux);

    printf(" Mes(es): ");

    for (int i = 0; i<12; i++)
    {
        if (meses->temp[i] == aux)
        {
            printf("\n %s. ", meses->nome[i]);
        }

    }

    printf("\n\n --------------------------------------- \n");
    printf(" -- Temperatura mais baixa registrada -- \n");

    for (int i = 0; i<12; i++)
    {
        if (aux > meses->temp[i])
        {
            aux = meses->temp[i];
        }
    }

    printf("\n Temperatura: ");
    printf("%.1f Graus\n\n", aux);

    printf(" Mes(es): ");

    for (int i = 0; i<12; i++)
    {
        if (meses->temp[i] == aux)
        {
            printf("\n %s. ", meses->nome[i]);
        }

    }

    printf("\n\n");

    system("pause");

    return 0;
}
