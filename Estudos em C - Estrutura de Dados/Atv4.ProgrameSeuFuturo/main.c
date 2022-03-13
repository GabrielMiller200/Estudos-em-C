/* Uma pequena loja de artesanato possui apenas um vendedor e comercializa ?? tipos de objetos
diferentes. O vendedor recebe um sal�rio de R$1100,00 acrescido de 5% do valor total de suas
vendas.
O valor unit�rio dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posi��o.
Crie um programa que receba os pre�os e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unit�rio e valor total de cada objeto. Ao final, dever�o ser mostrados
  o valor total das vendas e o valor da comiss�o que ser� paga ao vendedor.
b) O valor do objeto mais vendido e sua posi��o no vetor (em caso de empates mostre todos
empatados). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estoque.h"

int main()
{
    int tam = 0;
    char nome[50];
    float total = 0, pagamento = 0;
    float salario = 1100.00,porcent = 0.05;
    int quant = 0, aux;

    mostra_cabecalho ();

    scanf("%d", &tam);
    fflush(stdin);

    Estoque* estoque = (Estoque *) malloc(sizeof(Estoque ) * tam);

    printf("\n ----------------------------------------------\n");
    printf("\n Digite os detalhes sobre o seu Produto\n");

    for(int i=0; i < tam; i++)
    {
        printf("\n -- Produto %d --",i+1);
        printf("\n Nome: ");
        fgets(nome,50,stdin);
        fflush(stdin);
        strcpy(estoque[i].produto, nome);

        printf(" Valor unitario: ");
        scanf("%f", &estoque[i].valor);
        fflush(stdin);

        printf(" Unidades vendidas: ");
        scanf("%d", &estoque[i].quantidade);
        fflush(stdin);
    }

    mostra_estoque (estoque, &total, &tam);

    pagamento = total*porcent;

    mostra_detalhe (total, salario, porcent, pagamento);

    printf("\n Produto(s) mais vendido(s): \n\n");

    for(int i=0; i < tam; i++)
    {
        if ( quant <= estoque[i].quantidade)
        {
            quant = estoque[i].quantidade;
            aux = i;
            printf(" - %s", estoque[aux].produto );
            printf(" Quantidade: %d\n", quant);
            printf(" Valor unitario: %.2f\n",estoque[aux].valor);

            printf(" Posicao na Lista: %d\n", aux+1);

            printf(" Posicao no vetor: %d\n\n", aux);
        }
    }

    system("pause");

    return 0;
}
