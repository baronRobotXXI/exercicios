#ifndef CONVERSOR_H_INCLUDED
#define CONVERSOR_H_INCLUDED

typedef struct pilha Pilha;

Pilha* CriaPilha();
int PilhaVazia (Pilha* p);
int PilhaCheia (Pilha* p);
int Push (Pilha* p, int elemento);
int Pop (Pilha* p, int* retira);
int Peek(Pilha* p, int* verif);
int ConverteDecBin (int decimal, Pilha* bin);
void ImprimePilha (Pilha* p);

#endif // CONVERSOR_H_INCLUDED
