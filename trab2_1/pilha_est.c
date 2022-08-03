#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha_est.h"

#define MAX 50

struct pilha{
    int vet[MAX];
    int topo;
};

Pilha* CriaPilha(){
    Pilha* p;

    p = (Pilha*) malloc (sizeof(Pilha));

    if (p != NULL)
        p->topo = -1;

    return p;
}

int PilhaVazia (Pilha* p){      //1 - vazia, 0 - tem elementos

    if (p->topo == -1)
        return 1;
    else
        return 0;
}

int PilhaCheia (Pilha* p){

    if (p->topo == MAX-1)
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

int Palindromo (char* vet){
    Pilha* aux;
    int i;
    int tam;
    int meio;
    int elemento;

    aux = CriaPilha();
    tam = strlen(vet);
    meio = tam / 2;

    for (i = 0; i < meio; i++)
        Push(aux, vet[i]);

    if (tam % 2 == 1)
        i++;

    while (!PilhaVazia(aux)){
        Pop(aux, &elemento);

        if (elemento != vet[i])
            return 0;

        i++;
    }


    return 1;

}

int Elimina (Pilha* p, int elem){
    Pilha* aux;
    int item;

    aux = CriaPilha();

    if (PilhaVazia(p))
        return 0;

    else {
        do{
            Pop(p, &item);
            Push(aux, item);
        }while (item != elem || PilhaVazia(p));     //enquanto nao encontrar o elemento e a pilha
                                                    //nao estiver vazia, tira de uma e poe na outra

        if (PilhaVazia(p)){
            while (!PilhaVazia(aux)){
                Pop(aux, &item);
                Push(p, item);
            }
            return 0;       //falha, nao havia o elemento
        }
        else {      //havia o elemento
            Pop(aux, &item);                //o elemento foi inserido na pilha auxiliar, entao eh necessario remove-lo

            while (!PilhaVazia(aux)){
                Pop(aux, &item);
                Push(p, item);
            }

            return 1;       //havia o elemento, foi removido, pilha restaurada
        }
    }

}

int ParesImpares (Pilha* orig, Pilha* impares){
    Pilha* pares;
    int item;

    if (PilhaVazia(orig))
        return 0;           //nao eh possivel realizar a operacao

    pares = CriaPilha();

    while (!PilhaVazia(orig)){
        Peek(orig, &item);

        if (item % 2 == 0){
            Pop(orig, &item);
            Push(pares, item);
        }
        else{
            Pop(orig, &item);
            Push(impares, item);
        }

    }

    orig = pares;
    return 1;
}

void ImprimePilha (Pilha* p){
    int i;
    int tam;

    tam = p->topo+1;

    for (i = 0; i < tam; i++){
        printf("%d\t", p->vet[i]);
    }
    printf("\n");
}

void LiberaPilha (Pilha* p){
    p->topo = -1;
    free(&p);
}
