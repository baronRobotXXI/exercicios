#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x;
    float y;
    float intermX;
    float intermY;
    float distancia;

    printf("Querido usuario, digite x:\n");
    scanf("%f/n", &x);
    printf("Digite tambem y:\n");
    scanf("%f/n", &y);

    intermX = x - 0;
    intermY = y - 0;

    distancia = (float) (sqrt((intermX * intermX)+(intermY * intermY)));

    printf("A distancia entre o ponto e a origem sera: %.2f\n", distancia);

    return 0;

}
