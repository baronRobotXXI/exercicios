#ifndef LISTA_INT1_H_INCLUDED
#define LISTA_INT1_H_INCLUDED

typedef struct lista Lista;

Lista* CriaLista ();
int ListaVazia (Lista* lst);
int ListaCheia (Lista* lst);
int InsereElemento (Lista* lst, int elem);
int RemoveElemento (Lista* lst, int elem);
int ObtemValorElemento (Lista* lst, int pos, int* elem);
void ImprimeLista (Lista* lst);
void LiberaLista (Lista** lst);

#endif // LISTA_INT1_H_INCLUDED
