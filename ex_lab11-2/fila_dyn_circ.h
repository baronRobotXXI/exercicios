#ifndef FILA_DYN_CIRC_H_INCLUDED
#define FILA_DYN_CIRC_H_INCLUDED

typedef struct no Fila;

Fila* CriaFila();
int FilaVazia (Fila* f);
int InsereFim (Fila** f, int elem);
int RemoveInicio (Fila** f, int* elem);
void ImprimeFila (Fila* f);
void LiberaFila (Fila** f);

#endif // FILA_DYN_CIRC_H_INCLUDED
