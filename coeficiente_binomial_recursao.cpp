#include <stdio.h>
#include <stdlib.h>

int coeficiente(int n, int k)
{
    if(n >=0)
    {
        if((k==0)||(k==n))
        {
            return 1;
        }
        else
        {
            if((n > k) && (k > 0))
            {
                return coeficiente(n-1,k)+coeficiente(n-1,k-1);
            }
            else
            {
                printf("PARAMETROS INCONSISTENTES\n");
            }
        }
    }
    else
    {
        printf("PARAMETROS INCONSISTENTES\n");
        exit(1);
    }
}

int main()
{
    int i,j;

    printf("Digite dois Numeros Inteiros, correspondentes ao parametros do Coeficiente binomial C(n,k)\n");
    printf("Digite o valor de n:\n");
    scanf("%d",&i);
    printf("Digite o valor de k:\n");
    scanf("%d",&j);
    printf("O coeficiente binomial C(%d , %d) = %d\n",i,j,coeficiente(i,j));
    return 0;
}