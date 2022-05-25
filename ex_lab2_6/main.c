#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qtd;
    int* vetor;
    int i;
    int contaPar;
    int contaImpar;

    printf("Querido usuario, informe quantos numeros serao lidos:\n");
    scanf("%d", &qtd);

    vetor = (int*) malloc (qtd * sizeof(int));

    if (vetor == NULL){
        printf("Nao foi possivel criar o vetor!!\n");
        system("pause");
        exit(1);
    }

    contaPar= 0;
    contaImpar = 0;
    for (i = 0; i < qtd; i++){
        printf("Digite o %d valor:\n", i+1);
        scanf("%d", (vetor+i));

        if (*(vetor+i) % 2 == 1)
            contaImpar++;

        else
            contaPar++;

    }

    printf("Dos numeros lidos, %d sao pares e %d sao impares\n", contaPar, contaImpar);


}
