#ifndef FILA_DYN_2STR_H_INCLUDED
#define FILA_DYN_2STR_H_INCLUDED

typedef struct fila Fila;
typedef struct no No;

Fila* CriaFila();
int FilaVazia(Fila* f);
int InsereFim (Fila* f, int elem);
int RemoveInicio (Fila* f, int* elem);
void ImprimeFila (Fila* f);
void LiberaFila (Fila* f);

#endif // FILA_DYN_2STR_H_INCLUDED
