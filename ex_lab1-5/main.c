#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int linhas;
    int unidades;
    int i;
    int j;

    printf("<< TRIANGULO DE FLOYD >>\n");
    printf("Querido usuario, informe o numero de linhas:\n");
    scanf("%d/n", &linhas);

    unidades = 1;
    for (i = 0; i <= linhas; i++){ //i < linhas imprime uma linha a menos (por i == 0)
        for (j = 0; j < i; j++){    //entra aqui e imprime unidades o numero de vezes que o i contou
            printf("%d\t", unidades);
            unidades++;                 //incrementa unidades contando quantas vezes ja foi imprimido
        }
        printf("\n");                   //separa as linhas onde o unidade foi imprimido
    }



    return 0;

}
