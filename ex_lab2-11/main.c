#include <stdio.h>
#include <stdlib.h>

void MaiorMenorVetor (double* vet, double* ma, double* me, int tam){
    int i;

    ma = vet;
    me = vet;

    for (i = 0; i < tam; i++){
        if (*(vet+i) >= *ma)
            ma = (vet+i);
        if (*(vet+i) <= *me)
            me = (vet+i);
    }
}

int main()
{
    double vetor[5];
    double maior;
    double menor;
    int i;

    printf("Querido usuario, digite os elementos do vetor:\t");
    for (i = 0; i < 5; i++)
        scanf("%lf", (vetor+i));


    MaiorMenorVetor(vetor, &maior, &menor, 5);

    printf("\nOs elementos do vetor sao: \n");
    for (i = 0; i < 5; i++){
        printf("%.2f\t", vetor[i]);
    }
    printf("\nO maior elemento eh %.2f e o menor eh %.2f.\n", maior, menor);
    //se o endereco de maior e menor recebeu o endereco das posicoes do maior e menor do vetor, a impressao deveria resultar
    //no maior e menor elemento. Resulta em 0 (tbm nao eh lixo).

    return 0;
}
