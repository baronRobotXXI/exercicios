#include <stdio.h>
#include <stdlib.h>
#include "pilha_dyn.h"

struct no {
    int info;
    struct no* prox;
};

Pilha* CriaPilha(){
    return NULL;
}

int PilhaVazia (Pilha* p){

    if (p == NULL)
        return 1;
    else
        return 0;
}

int Push (Pilha** p, int elemento){
    Pilha* novo;

    novo = (Pilha*) malloc (sizeof(Pilha));

    if (novo == NULL)
        return 0;

    novo->info = elemento;
    novo->prox = *p;
    *p = novo;
    return 1;
}

int Pop (Pilha** p, int* elemento){
    Pilha* aux;

    if (PilhaVazia(*p))
        return 0;

    aux = *p;
    *elemento = aux->info;
    *p = aux->prox;
    free(aux);
    return 1;
}

int Peek (Pilha* p, int* elemento){

    if (PilhaVazia(p))
        return 0;
    else{
        *elemento = p->info;
        return 1;
    }
}

void ImprimePilha (Pilha* p){

    while(p != NULL){
        printf("%d\t", p->info);
        p = p->prox;
    }
    printf("\n");

}

void LiberaPilha (Pilha** p){
    Pilha* busca;

    while (*p != NULL){
        busca = *p;
        *p = (*p)->prox;
        free(busca);
    }
    free(*p);
}
