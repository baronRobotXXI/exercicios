#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int valor1;
    int valor2;
    int valor3;
    int valor4;
    int valor5;
    float media;
    int somaDesvios;
    int aux;
    float desvio;

    printf("<< MEDIA E DESVIO PADRAO >>\n");
    printf("Querido usuario, digite os valores a serem calculados:\n");
    scanf("%d%d%d%d%d", &valor1, &valor2, &valor3, &valor4, &valor5);

    media = (float) (valor1 + valor2 + valor3 + valor4 + valor5) / 5;

    aux = valor1 - media;
    aux *= aux;                                  //aux acumula a diferenca entre o valorX e a media, e a eleva ao quadrado.
    somaDesvios += aux;                          //acumula os valores de aux

    aux = valor2 - media;
    aux *= aux;
    somaDesvios += aux;

    aux = valor3 - media;
    aux *= aux;
    somaDesvios += aux;             //ficou ruim mas nao vejo como melhorar, ja que as variaveis sao declaradas separadamente

    aux = valor4 - media;
    aux *= aux;
    somaDesvios += aux;

    aux = valor5 - media;
    aux *= aux;
    somaDesvios += aux;

    desvio = (float) (sqrt) (somaDesvios / 4);              //nao faz sentido o desvio padrao ser amostral ja que estao sendo informados
                                                            //todos os membros da populacao
    printf("A media eh: %.2f\n", media);
    printf("O desvio padrao eh: %.2f\n", desvio);

    return 0;

}
