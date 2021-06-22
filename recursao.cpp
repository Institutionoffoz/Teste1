#include <stdio.h>

int pares(int n, int *vet)
{
    if(n == 1)
    {
        if(vet[0]%2 == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        if(vet[0]%2 == 0)
        {
            return 1 + pares(n-1, &vet[1]);
        }
        else
        {
            return pares(n-1, &vet[1]);
        }
    }
}

int main()
{
    int i, n, vet[100];
    printf("insira no maximo 100 valores no vetor\n");
    printf("declare a dimensao do vetor   =   \n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("digite o v[%d]  =   ", i);
        scanf("%d", &vet[i]);
    }
    printf("%d eh a quantidade de numeros pares\n", pares(n,vet));
    return 0;
}