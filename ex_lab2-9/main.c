#include <stdio.h>
#include <stdlib.h>

struct ponto {
    float x;
    float y;
};

typedef struct ponto Ponto;

void MultPontoPorConstante (Ponto* p, int cons){
    p->x *= cons;
    p->y *= cons;
}

int main()
{
    int constante;
    Ponto* pPonto;
    Ponto ponto;

    pPonto = &ponto;

    printf("Querido usuario, digite o valor do x do ponto: \n");
    scanf("%f", &ponto.x);
    printf("Digite o valor do y: \n");
    scanf("%f", &ponto.y);
    printf("Digite tambem a constante a ser operada: \n");
    scanf("%d", &constante);

    MultPontoPorConstante (pPonto, constante);

    printf("O resultado da operacao eh (%.2f,%.2f)\n", ponto.x, ponto.y);
}
