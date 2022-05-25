#include <stdio.h>
#include <stdlib.h>

struct ponto {
    int x;
    int y;
};

typedef struct ponto ponto;

int main()
{
    int tam;
    int i;
    ponto* pt;

    printf("Querido usuario, digite quantos pontos serao informados:\n");
    scanf("%d", &tam);

    pt = (ponto*) malloc (tam * (sizeof(ponto*)));

    if (pt == NULL){
        printf("Nao foi possivel criar o vetor desejado:\n");
        system("pause");
        exit(1);
    }

    for (i = 0; i < tam; i++){
        printf("Digite a coordenada x do ponto %d:\n", i+1);
        scanf("%d", &(pt+i)->x);
        printf("Digite a coordenada y do ponto %d:\n", i+1);
        scanf("%d", &(pt+i)->y);
    }

    printf("Os pontos digitados foram:\n");
    for (i = 0; i < tam; i++)
        printf("(%d,%d)\t", (pt+i)->x, (pt+i)->y);

        printf("\n");

}
