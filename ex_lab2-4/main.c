#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];
    int i;

    for (i = 0; i < 10; i++){
        vetor[i] = i;                       //apenas para popular o vetor. A tentativa de imprimir o lixo na esperanca
                                            //do lixo ser legivel fracassou.
    }

    printf("O conteudo do vetor eh: \n");
    for (i = 0; i < 10; i++){
        printf("%d\t", *(vetor+i));
    }

    return 0;
}
