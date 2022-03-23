#ifndef VETOR_H_INCLUDED
#define VETOR_H_INCLUDED

typedef struct _vet
{
    float vet[10];
    float vet_inv[10];
} Vetor;

void mostra_linha();

void mostra_cabecalho ();

void recebe_vetor (Vetor*_vet);

void mostra_menu();

void mostra_vetor_invertido (Vetor*_vet);

void mostra_vetor_original (Vetor*_vet);


#endif // VETOR_H_INCLUDED
