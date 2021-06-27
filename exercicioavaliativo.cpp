#include <stdio.h>
void mostra_rec_vetor(int n, int* vet)
{
    int i;
    for(i=0; i < n; i++)
    {
        printf("vet[%d] = %d", i, vet);
    }
}
void mostra_inv_rec_vetor(int n, int* vet)
{
{
    int aux;
    if (n <= 1)
       return 0;
    else
    {
     aux=vet[n-1];
     vet[n-1]=vet[0];
     vet[0]=aux;
     mostra_inv_rec_vetor (n-2,&vet[1]);
    }
   }
}

int main()
{
    int i, n, vet[100];
    printf("vetor recebe no max 100 valores\n");
    printf("digite a dimensao do vetor   =   ");
    scanf("%d", &n);
    printf("\n\n");
    for(i=0; i<n; i++)
    {
        printf("digite o vet[%d]  =   ", i);
        scanf("%d", &vet[i]);
    }
    mostra_inv_rec_vetor(n,vet);
    for(i=0; i < n; i++)
    {
        printf("\nvetor invertido v [%d] =  %d", i, vet[i]);
    }
    return 0;
}