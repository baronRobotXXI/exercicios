#include <stdio.h>
#include <stdlib.h>
//#include "ponto.c"
#include "ponto.h"

int main()
{
    int opcao;
    int opcaoFreePonto;
    Ponto* ponto1;
    Ponto* ponto2;
    int verif1;
    int verif2;
    float x;
    float y;
    float distancia;


    printf("Querido usuario, digite a opcao desejada:\n");
    printf("1 - Inicializar Ponto\n2 - Inserir Ponto\n3 - Remover Ponto\n4 - Calcular distancia entre dois pontos\n");
    scanf("%d", &opcao);

    while (opcao <= 0 || opcao > 4){
        printf("OPCAO INVALIDA!! FAVOR DIGITAR OPCAO NOVAMENTE:\n");
        printf("1 - Inicializar Ponto\n2 - Inserir Ponto\n3 - Consultar Ponto\n4 - Remover Ponto\n5 - Calcular distancia entre dois pontos\n");
        scanf("%d", &opcao);
    }

    while (opcao != 0){

        switch (opcao){
        case 1:
            verif1 = GeraPonto(ponto1);
            verif2 = GeraPonto(ponto2);

            if (verif1 == 0 || verif2 == 0){
                printf("Nao foi possivel criar o ponto desejado:\n");
                system("pause");
                exit(1);
            }

			break;

        case 2:
            printf("Digite o valor do x para o Ponto 1:\n");
            scanf("%f", &x);
            printf("Digite o valor do y para o Ponto 1:\n");
            scanf("%f", &y);

            verif1 = SetPonto(ponto1, x, y);

            if (verif1 == 0)
                printf("Nao foi possivel atribuir os valores para o ponto!\n");

            printf("Digite o valor do x para o Ponto 2:\n");
            scanf("%f", &x);
            printf("Digite o valor do y para o Ponto 2:\n");
            scanf("%f", &y);

            verif2 = SetPonto(ponto2, x, y);

            if (verif2 == 0)
                printf("Nao foi possivel atribuir os valores para o ponto!\n");

			break;

        case 3:
            GetPonto (ponto1, &x, &y);

            printf("O ponto eh (%.2f,.2f)", x, y);

			break;

        case 4:
            printf("Digite 1 para liberar o ponto 1, 2 para liberar o ponto 2 e 0 para liberar os dois pontos:\n");
            scanf("%d", &opcaoFreePonto);

            if (opcaoFreePonto == 1)
                LiberaPonto(&ponto1);
            else if (opcaoFreePonto == 2){
                LiberaPonto(&ponto2);
            }
            else if (opcaoFreePonto == 0){
                LiberaPonto(&ponto1);
                LiberaPonto(&ponto2);
            }
            else
                printf("OPCAO INVALIDA!\n");

			break;

        case 5:
            verif1 = DistanciaPonto(ponto1, ponto2, &distancia);

            if (verif1 == 0)
                printf("Nao foi possivel realizar o calculo da distancia entre os pontos!\n");
            else
                printf("A distancia entre os pontos eh de %.2f unidades.", distancia);

			break;

        }

        printf("Querido usuario, digite a opcao desejada:\n");
        printf("0-Encerrar Programa\n1 - Inicializar Ponto\n2 - Inserir Ponto\n3 - Remover Ponto\n4 - Calcular distancia entre dois pontos\n");
        scanf("%d", &opcao);

    while (opcao < 0 || opcao > 5){
        printf("OPCAO INVALIDA!! FAVOR DIGITAR OPCAO NOVAMENTE:\n");
        printf("0-Encerrar Programa\n1 - Inicializar Ponto\n2 - Inserir Ponto\n3 - Consultar Ponto\n4 - Remover Ponto\n5 - Calcular distancia entre dois pontos\n");
        scanf("%d", &opcao);
    }

    }
}
