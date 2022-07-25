#include <stdio.h>
#include <stdlib.h>
#include "fila_desp.h"

int main()
{
    Fila* fila;

    int opcao;
    int elemento;
    int verif;

    printf("Querido usuario, digite a opcao desejada:\n");
    printf("1 - Inicializar Fila\n");
    printf("2 - Inserir Elemento\n");
    printf("3 - Remover Elemento\n");
    printf("4 - Imprimir Fila\n");
    scanf("%d", &opcao);

    while (opcao <= 0 || opcao > 4) {
        printf("OPCAO INVALIDA!! FAVOR DIGITAR OPCAO NOVAMENTE:\n");
        printf("0 - Encerrar\n");
        printf("1 - Inicializar Fila\n");
        printf("2 - Inserir Elemento\n");
        printf("3 - Remover Elemento\n");
        printf("4 - Imprimir Fila\n");
        scanf("%d", &opcao);
    }

    while (opcao != 0) {
        switch (opcao) {
            case 1:
                fila = CriaFila();
                break;

            case 2:
                verif = FilaCheia(fila);

                if (verif == 0) {
                    printf("Digite o elemento a ser inserido:\n");
                    scanf("%d", &elemento);

                    InsereFim (fila, elemento);
                }
                else
                    printf("FILA CHEIA!!\n");

                break;
            case 3:
                if (fila != NULL) {
                    RemoveInicio(fila,&elemento);

                    printf("O elemento removido foi: %d\n", elemento);
                }
                else
                    printf("FILA VAZIA!!\n");

                break;

            case 4:
                if (fila != NULL) {
                    printf("Os elementos da fila sao:\n");

                    ImprimeFila(fila);
                }
                else
                    printf("FILA INVALIDA!!\n");

                break;

            }

        printf("Querido usuario, digite a opcao desejada:\n");
        printf("0 - Encerrar\n");
        printf("1 - Inicializar Fila\n");
        printf("2 - Inserir Elemento\n");
        printf("3 - Remover Elemento\n");
        printf("4 - Imprimir Fila\n");
        scanf("%d", &opcao);

        while (opcao < 0 || opcao > 4) {
            printf("OPCAO INVALIDA!! FAVOR DIGITAR OPCAO NOVAMENTE:\n");
            printf("0 - Encerrar\n");
            printf("1 - Inicializar Fila\n");
            printf("2 - Inserir Elemento\n");
            printf("3 - Remover Elemento\n");
            printf("4 - Imprimir Fila\n");
            scanf("%d", &opcao);
        }

    }

    free(fila);

    printf("Programa encerrado!\n");

    return 0;
}
