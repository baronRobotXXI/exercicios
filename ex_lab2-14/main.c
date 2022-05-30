#include <stdio.h>
#include <stdlib.h>

int* AlocaInteiro (int tam){
    int* end;
    int i;

    end = (int*) malloc (tam * sizeof(int));

    return end;
}

double* AlocaDouble (int tam){
    double* end;
    int i;

    end = (double*) malloc (tam * sizeof(double));

    return end;
}

double* To_Double (int* vet, int tam){
    int i;
    double* vetD;

    vetD = AlocaDouble(tam);

    for (i = 0; i < tam; i++)
        *(vetD+i) = (double) *(vet+i);


    return vetD;
}

int main()
{
    int tamanho;
    int* vetorInteiro;
    double* vetorDouble;
    int i;

    printf("Querido usuario, digite o tamanho do vetor:\n");
    scanf("%d", &tamanho);

    vetorInteiro = AlocaInteiro(tamanho);

    printf("Digite os elementos do vetor:\n");
    for (i = 0; i < tamanho; i++)
        scanf("%d", (vetorInteiro+i));

    vetorDouble = To_Double(vetorInteiro, tamanho);

    printf("Os elementos do vetor em double sao:\n");
    for (i = 0; i < tamanho; i++)
        printf("%.2f\t", *(vetorDouble+i));

    free(vetorInteiro);
    free(vetorDouble);

    return 0;
}
