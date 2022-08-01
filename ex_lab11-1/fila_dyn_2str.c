#ifndef FILA_DYN_2STR_C_INCLUDED
#define FILA_DYN_2STR_C_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include "fila_dyn_2str.h"

struct no {
    int info;
    struct no* prox;
};

struct fila{
    struct no* inicio;
    struct no* fim;
};

Fila* CriaFila(){
    Fila* f;

    f = (Fila*) malloc (sizeof(Fila));

    if (f != NULL){
        f->inicio = NULL;
        f->fim = NULL;
    }

    return f;
}

int FilaVazia(Fila* f){

    if (f->inicio == NULL)
        return 1;
    else
        return 0;
}

int InsereFim (Fila* f, int elem){
    No* novo;

    novo = (No*) malloc (sizeof(No));

    if (novo == NULL)
        return 0;
    else{
        novo->info = elem;
        novo->prox = NULL;

        if (FilaVazia(f))
            f->inicio = novo;
        else
            (f->fim)->prox = novo;

        f->fim = novo;

        return 1;
    }
}

int RemoveInicio (Fila* f, int* elem){
    No* aux;

    if (FilaVazia(f))
        return 0;

    else{
        aux = f->inicio;
        *elem = aux->info;

        if (f->inicio == f->fim)
            f->fim = NULL;

        f->inicio = aux->prox;

        free(aux);
        return 1;
    }

}

void ImprimeFila (Fila* f){
    No* aux;

    if (FilaVazia(f))
        return 0;

    aux = f->inicio;

    do{
        printf("%d\t", aux->info);
        aux = aux->prox;

    }while (aux != NULL);

    printf("\n");
}

void LiberaFila (Fila* f){
    No* aux;

    do{
        aux = f->inicio;
        f->inicio = aux->prox;
        free(aux);
    }while(aux->prox != NULL);
}

#endif // FILA_DYN_2STR_C_INCLUDED
