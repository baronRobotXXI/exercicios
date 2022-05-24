#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int matriz [3][3];
    int i;
    int j;

    int soma1;      //diagonal superior direita
    int soma2;      //diagonal superior esquerda
    int soma3;      //"triangulo" superior
    int soma4;      //triangulo esquerdo
    int soma5;      //triangulos esquerdo e direito
    int soma6;      //triangulos superior e inferior
    int soma7;      //triangulos superior e esquerdo (vide soma 2)
    int soma8;      //triangulos inferior e esquerdo

    printf("<< SOMANDO PARTES DA MATRIZ >>\n");
    printf("Querido usuario, digite os elementos da matriz:\n");

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d\t", matriz[i][j]);           //impressao da matriz
        }
        printf("\n");
    }

    soma1 = matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[1][1] + matriz[1][2] + matriz[2][2];
    soma2 = matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[1][0] + matriz[1][1] + matriz[2][0];
    soma3 = matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[1][1];
    soma4 = matriz[0][0] + matriz[1][0] + matriz[2][0] + matriz[1][1];
    soma5 = matriz[0][0] + matriz[0][2] + matriz[1][0] + matriz[1][2] + matriz[2][0] + matriz[2][2];
    soma6 = matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[1][1] + matriz[2][0] + matriz[2][1] + matriz[2][2];
    soma7 = matriz[0][0] + matriz[0][1] + matriz[0][2] + matriz[1][0] + matriz[1][1] + matriz[2][0];
    soma8 = matriz[0][0] + matriz[1][0] + matriz[1][1] + matriz[2][0] + matriz[2][1] + matriz[2][2];

    printf("A parte rachurada da figura 1 vale: %d\n", soma1);
    printf("A parte rachurada da figura 2 vale: %d\n", soma2);
    printf("A parte rachurada da figura 3 vale: %d\n", soma3);
    printf("A parte rachurada da figura 4 vale: %d\n", soma4);
    printf("A parte rachurada da figura 5 vale: %d\n", soma5);
    printf("A parte rachurada da figura 6 vale: %d\n", soma6);
    printf("A parte rachurada da figura 7 vale: %d\n", soma7);
    printf("A parte rachurada da figura 8 vale: %d\n", soma8);



    return 0;

}
