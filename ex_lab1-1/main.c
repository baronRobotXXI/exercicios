#include <stdio.h>
#include <stdlib.h>

int main()
{
    float apostador1;
    float apostador2;
    float apostador3;
    float totalApostado;
    float umPorCento;
    float premio;
    float resApost1;
    float resApost2;
    float resApost3;

    printf("<< LOTERIA >>\n");
    printf("Querido usuario, digite o valor apostado pelo primeiro apostador:\n");
    scanf("%f/n", &apostador1);
    printf("Digite tambem o valor apostado pelo segundo apostador:\n");
    scanf("%f/n", &apostador2);
    printf("Digite o valor apostado pelo terceiro apostador:\n");
    scanf("%f/n", &apostador3);
    printf("Finalmente, digite o valor do premio:\n");
    scanf("%f/n", &premio);

    totalApostado = apostador1 + apostador2 + apostador3;       //consolida os valores apostados numa variavel que representa 100% do valor apostado
    umPorCento = totalApostado / 100;

    resApost1 = (premio / 100) * (apostador1 / umPorCento);
    resApost2 = (premio / 100) * (apostador2 / umPorCento);
    resApost3 = (premio / 100) * (apostador3 / umPorCento);

    printf("O apostador 1 recebera: %.2f\n", resApost1);
    printf("O apostador 2 recebera: %.2f\n", resApost2);
    printf("O apostador 3 recebera: %.2f\n", resApost3);

    return 0;

}
