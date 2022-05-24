#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int fatorial;
    int i;
    int j;

    printf("<< FATORIAL 1 - 10 >>\n");

    i = 1;

    while (i <= 10){
        fatorial = 1;

        for (j = 2; j <= i; j++)
            fatorial *= j;

        printf("%d! = %d\n", (j-1), fatorial);

        i++;
    }

    return 0;

}
