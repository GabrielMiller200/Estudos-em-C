#include "estoque.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostra_estoque (Estoque*es, float *tt, int *tam)
{
    printf("\n ----------------------------------------------\n");
    printf("\n Tabela de Produtos\n");
    for(int i=0; i < *tam; i++)
    {
        printf("\n\t Produto [%d]\n", i+1);
        printf(" Nome: %s\n", es[i].produto);
        printf(" Unidades vendidas: %.2d\n",es[i].quantidade);
        printf(" Valor unitario :%.2f\n",es[i].valor);
        printf(" Total: %.2f \n\n", es[i].valor*es[i].quantidade);

        *tt = *tt + es[i].valor*es[i].quantidade;
    }
}

void mostra_detalhe (float tt, float sal, float porc, float pag)
{
    printf(" ----------------------------------------------\n");
    printf("\n Detalhes\n");
    printf("\n Total de vendas: %.2f\n", tt);
    printf(" Comissao: %.2f\n\n\n", tt*porc);
    printf(" Salario : %.2f\n", sal);
    printf(" Salario + comissao : %.2f\n\n", sal+pag);

    printf(" ----------------------------------------------\n");
}

void mostra_cabecalho ()
{
    printf(" \n\t --- LOJA DE ARTESANATO ---\n\n");

    printf(" ----------------------------------------------\n\n");
    printf(" Digite a Quantidade de Produtos diferentes\n");
    printf("\n Produtos unicos: ");
}
