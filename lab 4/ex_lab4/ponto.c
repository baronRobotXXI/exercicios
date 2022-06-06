#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "ponto.h"


struct ponto {
    float x;
    float y;
};

int GeraPonto (Ponto* pt){
    pt = (Ponto*) malloc(sizeof(Ponto));

    if (pt == NULL){
        return 0;           //falha
    }
    else{
        return 1;           //sucess
    }
}

int SetPonto (Ponto* pt, float x, float y){
    if (pt == NULL){
        return 0;       //falha
    }
    else {
        pt->x = x;
        pt->y = y;

        return 1;       //sucesso
    }

}

void GetPonto (Ponto* pt, float* x, float* y){
    *x = pt->x;
    *y = pt->y;
}

void LiberaPonto (Ponto** pt){
    free(pt);
}

int DistanciaPonto (Ponto* pt1, Ponto* pt2, float* dist){
    if (pt1 == NULL || pt2 == NULL){
        return 0;           //falha
    }
    else {
        float xResult;
        float yResult;

        xResult = pt2->x - pt1->x;
        yResult = pt2->y - pt1->y;

        *dist = (float) (sqrt) (xResult) + (yResult);

        return 1;    //sucesso
    }

}
