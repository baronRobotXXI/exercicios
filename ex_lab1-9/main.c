#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char nome[20];
    char novoNome [20] ;
    int i;

    printf("<< MINUSCULAS PARA MAIUSCULAS >>\n");
    printf("Querido usuario, digite um nome (em minuscula):\n");

    setbuf(stdin, NULL);
    gets(nome);

    for (i = 0; nome[i] != '\0'; i++){
        novoNome[i] = (int) nome[i] - 32;
    }

    printf("O nome digitado em maiusculas eh: %s", novoNome);		//imprimindo lixo depois do nome

    return 0;

}
