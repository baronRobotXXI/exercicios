#include <stdio.h>
#include <stdlib.h>

struct ponto {
    float x;
    float y;
};

typedef struct ponto Ponto;

void MovimentaPonto (Ponto* p, char dir){
    if (dir == 'L' || dir == 'l')
        p->x++;
    else if (dir == 'N' || dir == 'n')
        p->y++;
    else if (dir == 'O' || dir == 'o')
        p->x--;
    else if (dir == 'S' || dir == 's')
        p->y--;
    else
        printf("DIRECAO INVALIDA!\n");
}

int main()
{
    char direcao;
    Ponto* pPonto;
    Ponto ponto;

    pPonto = &ponto;

    printf("Querido usuario, digite o valor do x do ponto: \n");
    scanf("%f", &ponto.x);
    printf("Digite o valor do y: \n");
    scanf("%f", &ponto.y);
    printf ("Seja N - Norte, S - Sul, L - Leste e O - oeste.\nDigite a direcao a movimentar:\t");
    setbuf(stdin, NULL);
    scanf("%c", &direcao);

    MovimentaPonto(pPonto, direcao);

    printf("O ponto resultante eh: (%.2f,%.2f).", ponto.x, ponto.y);

    return 0;
}
