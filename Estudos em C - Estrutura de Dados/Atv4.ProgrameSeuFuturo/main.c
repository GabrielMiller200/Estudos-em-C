/* Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
  o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados). */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define salario 1100.00
#define porcent 0.05


struct estoque
{
    int quantidade;
    float valor;
    char produto[50];
} typedef Estoque;


int main()
{

    int tam = 0;
    char nome[50];
    float val, total = 0, pagamento = 0;
    int quant = 0, aux;

    printf(" \n\t --- LOJA DE ARTESANATO ---\n\n");

    printf(" ----------------------------------------------\n\n");
    printf(" Digite a Quantidade de Produtos diferentes\n");
    printf("\n Produtos unicos: ");
    scanf("%d", &tam);

    Estoque* estoque = (Estoque *) malloc(sizeof(Estoque ) * tam);

    printf("\n ----------------------------------------------\n");
    printf("\n Digite os detalhes sobre o seu Produto\n");

    printf("\n * SE O NOME quantER ESPACOS, DIGITAR JUNTO OU '.'\n EXEMPLO : JarraDeSuco OU Jarra.de.Suco\n");

    for(int i=0; i < tam; i++)
    {
        printf("\n -- Produto %d --",i+1);
        printf("\n Nome: ",i+1);
        scanf("%s", nome);
        strcpy(estoque[i].produto, nome);

        printf(" Valor unitario: ",i+1);
        scanf("%f", &estoque[i].valor);

        printf(" Unidades vendidas: ",i+1);
        scanf("%d", &estoque[i].quantidade);
    }

    printf("\n ----------------------------------------------\n");
    printf("\n Tabela de Produtos\n");
    for(int i=0; i < tam; i++)
    {
        printf("\n\t Produto [%d]\n", i+1);
        printf(" Nome: %s\n", estoque[i].produto);
        printf(" Unidades vendidas: %.2d\n",estoque[i].quantidade);
        printf(" Valor unitario :%.2f\n",estoque[i].valor);
        printf(" Total: %.2f \n\n", estoque[i].valor*estoque[i].quantidade);

        total = total +  estoque[i].valor*estoque[i].quantidade;
    }

    pagamento = total*porcent;

    printf(" ----------------------------------------------\n");
    printf("\n Detalhes\n");
    printf("\n Total de vendas: %.2f\n", total);
    printf(" Comissao: %.2f\n\n\n", total*porcent);
    printf(" Salario : %.2f\n", salario);
    printf(" Salario + comissao : %.2f\n\n", salario+pagamento);

    printf(" ----------------------------------------------\n");
    printf("\n Detalhes tecnicos\n\n");

    for(int i=0; i < tam; i++)
    {

        if ( quant < estoque[i].quantidade)
        {
            quant = estoque[i].quantidade;
            aux = i;
        }

    }

    printf(" Produto mais vendido: %s\n", estoque[aux].produto);
    printf(" Quantidade: %d\n", quant);
    printf(" Valor unitario: %.2f\n",estoque[aux].valor);

    printf(" Posicao na Lista: %d\n\n", aux+1);

    printf(" Posicao no vetor: %d\n\n", aux);

    printf(" ----------------------------------------------\n");
    system("pause");

    return 0;
}
