#include <stdio.h>
#include <stdlib.h>
#include "fila_desp.h"

#define TAM 10

struct fila {
    int vet[TAM];
    int inicio;
    int fim;
};

Fila* CriaFila(){
    Fila* f;

    f = (Fila*) malloc (sizeof(Fila));

    if (f == NULL){
        printf("Erro de alocacao!\n");
        system("pause");
        exit(1);
    }
    else{
        f->inicio = 0;
        f->fim = 0;
    }

    return f;
}

int FilaVazia (Fila* f){

    if (f->inicio == f->fim)
        return 1;
    else
        return 0;
}

int FilaCheia (Fila* f){

    if (f->inicio == (f->fim+1) % TAM)
        return 1;
    else
        return 0;
}

int InsereFim (Fila* f, int elem){

    if (FilaCheia(f))
        return 0;
    else{
        f->vet[f->fim] = elem;
        f->fim = (f->fim+1) % TAM;
        return 1;
    }
}

int RemoveInicio (Fila* f, int* elem){

    if (FilaVazia(f))
        return 0;
    else{
        *elem = f->vet[f->inicio];
        f->inicio = (f->inicio+1) % TAM;
        return 1;
    }
}

void ImprimeFila (Fila* f){
    int i;

    for (i = f->inicio; i < f->fim; i++){
        printf("%d\t", f->vet[i]);
    }
    printf("\n");
}
