#ifndef ESTOQUE_H_INCLUDED
#define ESTOQUE_H_INCLUDED

struct estoque
{
    int quantidade;
    float valor;
    char produto[50];
} typedef Estoque;

void mostra_estoque (Estoque*es, float *tt, int *tam);

void mostra_detalhe (float tt, float sal, float porc, float pag);

#endif // ESTOQUE_H_INCLUDED
