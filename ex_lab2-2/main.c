#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[] = "Jose Augusto";
    int i;

    printf("A string eh: \n");
    i = 0;
    while (nome[i] != '\0'){
        printf("%c", *(nome+i));
        i++;
    }


    printf("\n");


    return 0;

}
