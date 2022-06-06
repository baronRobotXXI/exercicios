#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

typedef struct ponto Ponto;

int GeraPonto (Ponto* pt);
int SetPonto (Ponto* pt, float x, float y);
void GetPonto (Ponto* pt, float* x, float* y);
void LiberaPonto (Ponto** pt);
int DistanciaPonto (Ponto* pt1, Ponto* pt2, float* dist);

#endif // PONTO_H_INCLUDED
