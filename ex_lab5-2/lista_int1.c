#include <stdio.h>
#include <stdlib.h>
#include "lista_int1.h"
#define TAM 20

struct lista {
    int info[TAM];
    int fim;
};

Lista* CriaLista (){
    Lista* lst;

    lst = (Lista*) malloc (sizeof(Lista));

    if (lst == NULL){
        printf("Erro de alocacao!\n");
        system("pause");
        exit(1);
    }
    else{
        lst->fim = 0;
        return lst;
    }
}

int ListaVazia (Lista* lst){
    if (lst->fim == 0)
        return 1;
    else
        return 0;
}

int ListaCheia (Lista* lst){
    if (lst->fim == TAM)
        return 1;
    else
        return 0;
}

int InsereElemento (Lista* lst, int elem){
    if (lst == NULL || (ListaCheia(lst)))
        return 0;           //falha
    else{
        lst->info[lst->fim] = elem;
        lst->fim++;
        return 1;           //sucesso
    }
}

int RemoveElemento (Lista* lst, int elem){
    int i;
    int j;

    if (lst == NULL || ListaVazia(lst)){
        return 0;           //falha
    }
    else {
        for (j = 0; j < lst->fim && lst->info[j] != elem; j++);

        if (j == lst->fim)
            return 0;

        for (i = j+1; i < (lst->fim)-1; i++)
            lst->info[i-1] = lst->info[i];

        lst->fim--;

        return 1;
    }

}

int ObtemValorElemento (Lista* lst, int pos, int* elem){
    int i;

    if (lst == NULL || (ListaVazia(lst)))
        return 0;
    else
        for (i = 0; i < pos; i++);

    *elem = lst->info[i];
    return 1;

}

void ImprimeLista (Lista* lst){
    int i;

    printf("Os elementos da lista sao:\n");
    for (i = 0; i <= (lst->fim)-1; i++)
        printf("%d\t", lst->info[i]);

    printf("\n");

}

void LiberaLista (Lista** lst){
    free(*lst);
}
