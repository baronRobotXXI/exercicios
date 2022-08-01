#include <stdio.h>
#include <stdlib.h>
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

int Palindromo (Pilha* p){
    int tam;
    int metade;
    int i;
    int verif;
    int item;
    int item2;
    Pilha* aux;
    Pilha* cmp;

    cmp = CriaPilha();

    aux = p;
    verif = 0;

    tam = p->topo + 1;
    metade = tam / 2;

    if (PilhaVazia(p))
        return 0;                       //se a pilha eh vazia, nao faz sentido

    for (i = 0; i <= metade; i++){      //supondo que a palavra tenha letras impares.
       Pop(aux, &item);                 //7 / 2 = 3. Se for i < metade, ele so vai até 2. O dobro de 2 está longe de 7.
       Push(cmp, item);                 //ate na metade, empilha de uma na outra
    }

    do{
        Pop(aux, &item);
        Pop(cmp, &item2);

        if (item != item2){
            verif = 1;
            break;
        }

    }while (PilhaVazia(aux) || PilhaVazia(cmp));

    if (verif == 1)
        return 0;       //diferentes, nao eh palindromo
    else
        return 1;       //iguais, palindromo

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
