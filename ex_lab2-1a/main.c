#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 40;
    int* p;

    p = &a;

    printf("O endereco da variavel a eh: %p\n", &a);
    printf("O endereco do ponteiro p eh: %p\n", p);

    return 0;

}
