#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float peso;
    float altura;
    float imc;

    printf("<< CALCULANDO IMC >>\n");
    printf("Querido usuario, informe o peso:\n");
    scanf("%f/n", &peso);
    printf("Informe a altura: \n");
    scanf("%f/n", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5)
        printf("A pessoa apresenta um IMC de %.2f e sua classificacao eh MAGRA", imc);
    else if (imc < 25)
        printf("A pessoa apresenta um IMC de %.2f e sua classificacao eh SAUDAVEL", imc);
    else if (imc < 30)
        printf("A pessoa apresenta um IMC de %.2f e sua classificacao eh SOBREPESO", imc);
    else if (imc < 35)
        printf("A pessoa apresenta um IMC de %.2f e sua classificacao eh OBESIDADE GRAU I", imc);
    else if (imc < 40)
        printf("A pessoa apresenta um IMC de %.2f e sua classificacao eh OBESIDADE GRAU II", imc);
    else
        printf("A pessoa apresenta um IMC de %.2f e sua classificacao eh OBESIDADE GRAU III", imc);

    return 0;

}
