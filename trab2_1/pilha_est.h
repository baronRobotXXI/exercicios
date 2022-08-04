#ifndef PILHA_EST_H_INCLUDED
#define PILHA_EST_H_INCLUDED

typedef struct pilha Pilha;

Pilha* CriaPilha();
int PilhaVazia (Pilha* p);
int PilhaCheia (Pilha* p);
int Push (Pilha* p, int elemento);
int Pop (Pilha* p, int* retira);
int Peek(Pilha* p, int* verif);
int Palindromo (char* vet);
int Elimina (Pilha* p, int elem);
int ParesImpares (Pilha** orig, Pilha* impares);
void ImprimePilha (Pilha* p);
void LiberaPilha (Pilha* p);

#endif // PILHA_EST_H_INCLUDED
