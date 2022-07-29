#include <stdio.h>
#include <stdlib.h>
#include "conversor.h"

#define TAM 64

struct pilha {
    int vet[TAM];
    int topo;
};

Pilha* CriaPilha(){
    Pilha* p;

    p = (Pilha*) malloc (sizeof(Pilha));

    if (p != NULL)
        p->topo = -1;

    return p;
}

int PilhaVazia (Pilha* p){

    if (p->topo == -1)
        return 1;
    else
        return 0;
}

int PilhaCheia (Pilha* p){

    if (p->topo == TAM-1)
        return 1;
    else
        return 0;
}

int Push (Pilha* p, int elemento){

    if (p == NULL || PilhaCheia(p))
        return 0;
    else {

        p->topo++;
        p->vet[p->topo] = elemento;
        return 1;
    }

}

int Pop (Pilha* p, int* retira){

    if (p == NULL || PilhaVazia(p)){
        return 0;
    }
    else{
        *retira = p->vet[p->topo];
        p->topo--;
        return 1;
    }
}

int Peek(Pilha* p, int* verif){

    if (p == NULL || PilhaVazia(p))
        return 0;
    else
        *verif = p->vet[p->topo];

    return 1;
}

int ConverteDecBin (int decimal, Pilha* bin) {
    int q;      //quociente
    int r;      //resto
    int op;     //para evitar uma recursividade. Sem o op seria necessario passar o decimal restante pra fcao novamente

    if (bin == NULL || PilhaCheia(bin))
        return 0;               //falhou

    q = 1;      //garantir que nao vai ser eventualmente um lixo = 0
    op = decimal;

    while (q != 0){
        q = op / 2;
        r = op % 2;

        Push (bin, r);

        if (q != 0)
            op = q;
    }

    return 1;
}

void ImprimePilha (Pilha* p){
    int i;
    int tam;
    int num;

    tam = p->topo+1;

    for (i = 0; i < tam; i++){
        Pop(p, &num);
        printf("%d", num);
    }
    printf("\n");
}
