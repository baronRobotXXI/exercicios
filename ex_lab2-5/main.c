#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* vetor;
    int i;

    vetor = (int*) malloc (5*(sizeof(int)));

    if (vetor == NULL){
        printf("O vetor não pode ser criado!\n");
        system("pause");
        exit(1);
    }

    for (i = 0; i < 5; i++){
        printf("Querido usuario, digite o valor do %do numero:\n", i+1);
        scanf("%d", (vetor+i));
    }

    printf("Os valores digitados foram: ");
    for (i = 0; i < 5; i++){
        printf("%d\t", *(vetor+i));
    }

    free(vetor);

    return 0;
}
