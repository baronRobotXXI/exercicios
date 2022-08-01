#include <stdio.h>
#include <stdlib.h>
#include "pilha_est.h"

#define PALAVRA 25

int main(){

    Pilha* pilha;
    Pilha* impares;

    int opcao;
    int elemento;
    int verif;
    int i;
    char word[PALAVRA];

    printf("Querido usuario, digite a opcao desejada:\n");
    printf("0 - Encerrar Programa\n");
    printf("1 - Inicializar Pilha\n");
    printf("2 - Inserir Elemento\n");
    printf("3 - Remover Elemento\n");
    printf("4 - Imprimir o Ultimo Elemento Informado\n");
    printf("5 - Confere se Palavra eh Palindromo\n");
    printf("6 - Remove elemento especifico\n");
    printf("7 - Separa Pares e Impares\n");
    printf("8 - Imprimir Pilha\n");
    printf("9 - Libera Pilha\n");
    scanf("%d", &opcao);

    if (opcao == 0)
        return 0;       //encerra aqui

    while (opcao < 0 || opcao > 9) {
        printf("OPCAO INVALIDA!! FAVOR DIGITAR OPCAO NOVAMENTE:\n");
        printf("0 - Encerrar Programa\n");
        printf("1 - Inicializar Pilha\n");
        printf("2 - Inserir Elemento\n");
        printf("3 - Remover Elemento\n");
        printf("4 - Imprimir o Ultimo Elemento Informado\n");
        printf("5 - Confere se Palavra eh Palindromo\n");
        printf("6 - Remove elemento especifico\n");
        printf("7 - Separa Pares e Impares\n");
        printf("8 - Imprimir Pilha\n");
        printf("9 - Libera Pilha\n");
    }

    while (opcao != 0) {
        switch (opcao) {
            case 1:
                pilha = CriaPilha();
                impares = CriaPilha();
                break;

            case 2:
                verif = PilhaCheia(pilha);

                if (!verif) {
                    printf("Digite o elemento a ser inserido:\n");
                    scanf("%d", &elemento);

                    Push(pilha, elemento);
                }
                else
                    printf("Erro ao inserir elemento!!\n");

                break;
            case 3:
                if (pilha != NULL) {
                    Pop(pilha, &elemento);
                    printf("O elemento removido foi:%d\n",elemento);
                }
                else
                    printf("Erro ao remover elemento!!\n");

                break;

            case 4:
                if (pilha != NULL){
                    Peek(pilha, &elemento);

                    printf("O ultimo elemento informado foi:%d\n", elemento);
                }
                else
                    printf("Erro ao consultar elemento!!\n");

                break;

            case 5:
                printf("Digite a palavra a ser conferida:\n");
                setbuf(stdin, NULL);
                gets(word);

                for (i = 0; (word+i) != '\0'; i++)
                    Push(pilha,*word);

                verif = Palindromo(pilha);

                if (verif)
                    printf("A palavra %s eh palindromo!\n", word);
                else
                    printf("A palavra %s nao eh palindromo!\n", word);

                break;

            case 6:
                printf("Digite o elemento a ser removido:\n");
                scanf("%d", &elemento);

                verif = Elimina(pilha, elemento);

                if (verif)
                    printf("Elemento removido com sucesso!\n");
                else
                    printf("Falha ao remover elemento!\n");

                break;

            case 7:
                verif = ParesImpares(pilha, impares);

                if (verif){
                    printf("As pilhas separadas sao:\n");

                    printf("Pares:\n");
                    ImprimePilha(pilha);

                    printf("Impares: \n");
                    ImprimePilha(impares);
                }
                else
                    printf("Erro ao separar pilha!\n");

                    break;

            case 8:
                printf("Os elementos da pilha sao:\n");
                ImprimePilha(pilha);

                break;

            case 9:
                LiberaPilha(pilha);
                LiberaPilha(impares);

                break;
            }

        printf("Querido usuario, digite a opcao desejada:\n");
        printf("0 - Encerrar Programa\n");
        printf("1 - Inicializar Pilha\n");
        printf("2 - Inserir Elemento\n");
        printf("3 - Remover Elemento\n");
        printf("4 - Imprimir o Ultimo Elemento Informado\n");
        printf("5 - Confere se Palavra eh Palindromo\n");
        printf("6 - Remove elemento especifico\n");
        printf("7 - Separa Pares e Impares\n");
        printf("8 - Imprimir Pilha\n");
        printf("9 - Libera Pilha\n");
        scanf("%d", &opcao);

        while (opcao < 0 || opcao > 9) {
            printf("OPCAO INVALIDA!! FAVOR DIGITAR OPCAO NOVAMENTE:\n");
            printf("0 - Encerrar Programa\n");
            printf("1 - Inicializar Pilha\n");
            printf("2 - Inserir Elemento\n");
            printf("3 - Remover Elemento\n");
            printf("4 - Imprimir o Ultimo Elemento Informado\n");
            printf("5 - Confere se Palavra eh Palindromo\n");
            printf("6 - Remove elemento especifico\n");
            printf("7 - Separa Pares e Impares\n");
            printf("8 - Imprimir Pilha\n");
            printf("9 - Libera Pilha\n");
            scanf("%d", &opcao);
        }
    }

    return 0;
}
