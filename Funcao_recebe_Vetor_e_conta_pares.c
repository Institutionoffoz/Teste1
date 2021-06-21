#include <stdio.h>
#include <stdlib.h>

int pares(int n, int *vet)
{
    int cont_pares=0, i;
    for(i=0; i<n; i++)
    {
        if(vet[i]%2==0)
        {
            cont_pares++;
        }
    }
    return cont_pares;
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