#include <stdio.h>
#include <stdlib.h>
#include "conversor.h"

int main()
{
    Pilha* binario;

    int opcao;
    int elemento;
    int verif;

    binario = CriaPilha();

    printf("Querido usuario, digite 0 para encerrar ou outro valor positivo para continuar:\n");
    scanf("%d", &opcao);

    while (opcao < 0) {
        printf("OPCAO INVALIDA!!\n");
        printf("Digite 0 para encerrar ou outro valor positivo para continuar:\n");
        scanf("%d", &opcao);
    }

    while (opcao != 0) {

        printf("Digite o valor a ser convertido para decimal:\n");
        scanf("%d", &elemento);

        verif = ConverteDecBin(elemento, binario);

        if (verif){
            printf("O valor em binario sera: \n");
            ImprimePilha(binario);
        }
        else
            printf("Nao foi possivel fazer a conversao!\n");


        printf("Querido usuario, digite 0 para encerrar ou outro valor positivo para continuar:\n");
        scanf("%d", &opcao);

        while (opcao < 0) {
            printf("OPCAO INVALIDA!!\n");
            printf("Digite 0 para encerrar ou outro valor positivo para continuar:\n");
            scanf("%d", &opcao);
        }
    }

    free(binario);

    printf("Programa encerrado!\n");

    return 0;
}
