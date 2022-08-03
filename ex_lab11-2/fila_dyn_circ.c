#include <stdio.h>
#include <stdlib.h>
#include "fila_dyn_circ.h"

struct no{
    int info;
    struct no* prox;
};

Fila* CriaFila(){
    return NULL;
}

int FilaVazia (Fila* f){

    if(f == NULL)
        return 1;
    else
        return 0;
}

int InsereFim (Fila** f, int elem){
    Fila* novo;

    novo = (Fila*) malloc (sizeof(Fila));

    if (novo == NULL){
        printf("Erro de alocacao!\n");
        system("pause");
        exit(1);
    }

    else{
        novo->info = elem;

        if (FilaVazia(*f)){
            novo->prox = novo;
            (*f) = novo;
        }
        else{
            novo->prox = (*f)->prox;
            (*f)->prox = novo;
            *f = novo;
        }
        return 1;

    }
}

int RemoveInicio (Fila** f, int* elem){
    Fila* aux;

    if (FilaVazia(*f))
        return 0;

    else{
        aux = (*f)->prox;
        *elem = aux->info;

        if (*f == (*f)->prox){
            *f = NULL;
            return 1;
        }
        else{
            (*f)->prox = aux->prox;
            free(aux);
            return 1;
        }

    }

}

void ImprimeFila (Fila* f){
    Fila* local;

    local = f->prox;

    do{
        printf("%d\t", local->info);
        local = local->prox;
    }while(local != f->prox);

    printf("\n");

}

void LiberaFila (Fila** f){
    Fila* aux;

    while ((*f) != NULL){
        aux = *f;
        (*f) = (*f)->prox;
        free(aux);
    }
     free(f);
}
