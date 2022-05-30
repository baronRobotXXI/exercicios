#include <stdio.h>
#include <stdlib.h>

int* AlocaInteiro (int tam){
    int* end;
    int i;

    end = (int*) malloc (tam * sizeof(int));

    return end;
}

void ImprimeVetor (int* vet, int tam){
    int i;

    for (i = 0; i < tam; i++){
        printf("%d\t", vet[i]);
    }
    printf("\n");
}

int main()
{
    int tamanho;
    int* vetor;
    int i;

    printf("Querido usuario, digite o tamanho do vetor desejado:\n");
    scanf("%d", &tamanho);

    vetor = AlocaInteiro (tamanho);

    for (i = 0; i < tamanho; i++)
        *(vetor+i) = 0;

    ImprimeVetor (vetor, tamanho);

    free(vetor);

    return 0;
}
