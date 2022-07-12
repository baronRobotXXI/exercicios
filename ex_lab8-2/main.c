#include <stdio.h>
#include <stdlib.h>
#include "pilha_dyn.h"

int main(){

    Pilha* pilha;
    int opcao;
    int info;
    int verif;

    printf("Querido usuario, digite a opcao desejada:\n");
    printf("0 - Encerrar Programa\n");
    printf("1 - Inicializar Pilha\n");
    printf("2 - Inserir Elemento\n");
    printf("3 - Remover Elemento\n");
    printf("4 - Imprimir o Ultimo Elemento Informado\n");
    printf("5 - Imprimir Pilha\n");
    printf("6 - Libera Pilha\n");
    scanf("%d", &opcao);

    if (opcao == 0)
        return 0;       //encerra aqui

    while (opcao <= 0 || opcao > 6) {
        printf("OPCAO INVALIDA!! FAVOR DIGITAR OPCAO NOVAMENTE:\n");
        printf("0 - Encerrar Programa\n");
        printf("1 - Inicializar Pilha\n");
        printf("2 - Inserir Elemento\n");
        printf("3 - Remover Elemento\n");
        printf("4 - Imprimir o Ultimo Elemento Informado\n");
        printf("5 - Imprimir Pilha\n");
        printf("6 - Libera Pilha\n");
    }

    while (opcao != 0) {
        switch (opcao) {
            case 1:
                pilha = CriaPilha();
                break;

            case 2:
                printf("Digite o elemento a ser inserido:\n");
                scanf("%d", &info);

                verif = Push(&pilha, info);

                if(verif)
                    printf("Elemento inserido com sucesso!\n");
                else
                    printf("Erro ao inserir elemento!!\n");

                break;

            case 3:
                if (pilha != NULL) {
                    Pop(&pilha, &info);
                    printf("O elemento removido foi:%d\n",info);
                }
                else
                    printf("Erro ao remover elemento!!\n");

                break;

            case 4:
                if (pilha != NULL){
                    Peek(pilha, &info);

                    printf("O ultimo elemento informado foi:%d\n", info);
                }
                else
                    printf("Erro ao consultar elemento!!\n");

                break;

            case 5:
                if (PilhaVazia(pilha))
                    printf("Nao ha o que imprimir!\n");
                else{
                    printf("Os elementos da lista sao:\n");
                    ImprimePilha(pilha);
                }

                break;

            case 6:
                LiberaPilha(&pilha);
                break;

            }

        printf("Querido usuario, digite a opcao desejada:\n");
        printf("0 - Encerrar Programa\n");
        printf("1 - Inicializar Pilha\n");
        printf("2 - Inserir Elemento\n");
        printf("3 - Remover Elemento\n");
        printf("4 - Imprimir o Ultimo Elemento Informado\n");
        printf("5 - Imprimir Pilha\n");
        printf("6 - Libera Pilha\n");
        scanf("%d", &opcao);

        while (opcao < 0 || opcao > 6) {
            printf("OPCAO INVALIDA!! FAVOR DIGITAR OPCAO NOVAMENTE:\n");
            printf("0 - Encerrar Programa\n");
            printf("1 - Inicializar Pilha\n");
            printf("2 - Inserir Elemento\n");
            printf("3 - Remover Elemento\n");
            printf("4 - Imprimir o Ultimo Elemento Informado\n");
            printf("5 - Imprimir Pilha\n");
            printf("6 - Libera Pilha\n");
            scanf("%d", &opcao);
        }
    }

    return 0;
}
