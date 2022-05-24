#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned long long fatorial;
    int i;
    int j;

    printf("<< FATORIAL 11 - 15 >>\n");

    i = 11;

    while (i <= 15){
        fatorial = 3628800;
                                                        //os valores obtidos usando int foram:
        for (j = 11; j <= i; j++)                       //11! = 39916800, 12! = 479001600, 13! = 1932053504
                                                        //14! = 1278945280 15! = 2004310016
            fatorial *= j;

        printf("%d! = %llu\n", (j-1), fatorial);        //quando se modifica o tipo da variavel e o formatador do printf,
                                                        //obtem-se o resultado esperado normalmente.
        i++;
    }

    return 0;

}
