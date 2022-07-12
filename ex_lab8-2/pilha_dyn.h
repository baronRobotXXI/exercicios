#ifndef PILHA_DYN_H_INCLUDED
#define PILHA_DYN_H_INCLUDED

typedef struct no Pilha;

Pilha* CriaPilha();
int PilhaVazia (Pilha* p);
int Push (Pilha** p, int elemento);
int Pop (Pilha** p, int* elemento);
int Peek (Pilha* p, int* elemento);
void ImprimePilha (Pilha* p);
void LiberaPilha (Pilha** p);

#endif // PILHA_DYN_H_INCLUDED
