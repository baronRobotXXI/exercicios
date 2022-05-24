#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int bit1;
    int bit2;
    int bit3;
    int bit4;
    int somador;

    printf("<< CONVERSOR BINARIO - DECIMAL >>\n");
    printf("Querido usuario, digite o primeiro bit:\n");
    scanf("%d/n", &bit1);
    printf("Digite o segundo: \n");
    scanf("%d/n", &bit2);
    printf("Digite o terceiro: \n");
    scanf("%d/n", &bit3);
    printf("Digite o quarto: \n");
    scanf("%d/n", &bit4);

    somador = bit4 + (bit3 * 2) + (bit2 * 4) + (bit1 * 8);

    printf("O valor digitado em decimal eh: %d\n", somador);

    return 0;

}
