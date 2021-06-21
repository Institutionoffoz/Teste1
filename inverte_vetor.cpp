#include <stdio.h>

void inverte(int n, float *vet)
{
    float aux;
    int i;
    for(i = 0; i<(n/2); i++)
    {
        aux = vet[n-i-1];
        vet[n-i-1]=vet[i];
        vet[i]=aux;
    }
}

int main()
{
    int i, n;
    float vet[100];
    printf("vetor recebe no max 100 valores\n");
    printf("digite a dimensao do vetor   =   ");
    scanf("%d", &n);
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        printf("digite o vet[%d]  =   ", i);
        scanf("%f", &vet[i]);
    }
    inverte(n,vet);
    for(i=0; i < n; i++)
    {
        printf("\nvetor invertido v [%d] =  %.2f", i, vet[i]);
    }
    return 0;
}