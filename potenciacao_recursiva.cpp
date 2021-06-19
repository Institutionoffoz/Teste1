#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double pot (double x, int k)
{
    if(k == 0)
    {
        return 1;
    }
    else
    {
        return(x * pot(x,k-1));
    }
}

int main()
{
    double x;
    int expoente;

    printf("informe um numero\n");
    scanf("%lf", &x);
    printf("informe um expoente\n");
    scanf("%d", &expoente);
    if(expoente < 0)
    {
        printf("EXPOENTE FORA DOS LIMITES PERMITIDOS\n");
        exit(1);
    }
    printf("valor da potencia da funcao recursiva:  %.5lf\n", pot(x,expoente));
    printf("valor da potencia da funcao     POW  :  %.5lf\n", pow(x,expoente));
    return 0;
}