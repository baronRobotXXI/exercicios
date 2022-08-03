#ifndef CIRC_EST_H_INCLUDED
#define CIRC_EST_H_INCLUDED

typedef struct fila Fila;

Fila* CriaFila();
int FilaVazia (Fila* f);
int FilaCheia (Fila* f);
int InsereFim (Fila* f, int elem);
int RemoveInicio (Fila* f, int* elem);
void ImprimeFila (Fila* f);
void LiberaFila (Fila** f);

#endif // CIRC_EST_H_INCLUDED
