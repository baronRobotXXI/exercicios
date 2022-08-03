#include <stdio.h>
#include <stdlib.h>
#include "circ_est.h"

#define TAM 50

struct fila {
    int vet[TAM];
    int inicio;
    int conta;
};

Fila* CriaFila(){
    Fila* f;

    f = (Fila*) malloc (sizeof(Fila));

    if (f == NULL){
        printf("Falha na alocacao!\n");
        system("pause");
        exit(1);
    }
    else{
        f->inicio = 0;
        f->conta = 0;
    }

    return f;
}

int FilaVazia (Fila* f){

    if (f->conta == 0)
        return 1;
    else
        return 0;
}

int FilaCheia (Fila* f){

    if (f->conta == TAM)
        return 1;
    else
        return 0;
}

int InsereFim (Fila* f, int elem){

    if (FilaCheia(f))
        return 0;

    f->vet[(f->inicio + f->conta) % TAM] = elem;
    f->conta++;
    return 1;
}

int RemoveInicio (Fila* f, int* elem){

    if (FilaVazia(f))
        return 0;
    else{
        *elem = f->vet[(f->inicio)];
        f->inicio = (f->inicio+1) % TAM;
        f->conta--;
        return 1;
    }
}

void ImprimeFila (Fila* f){
    int i;

    for (i = f->inicio; i < f->conta; i++){
        printf("%d\t", f->vet[i]);
    }
    printf("\n");
}

void LiberaFila (Fila** f){
    (*f)->conta = 0;
    (*f)->inicio = 0;

    free(f);
}
