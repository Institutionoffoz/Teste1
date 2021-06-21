#include <stdio.h>
#include <stdlib.h>

float minimo (int n, float *v)
   {
    float min;
    int i;
    min = v[0];
    for (i = 1 ; i < n ; i++)
    {
     if (v[i] < min) min = v[i];
    }
    return min;
   }

int main()
{
    int i,n;
    float v[100];
    printf("Insira um vetor com n posicoes (no maximo 100)\n");
    printf ("Digite a dimensao do vetor (n) =  ");
    scanf ("%d",&n);
    for (i = 0 ; i < n ; i++)
    {
     printf("\nDigite V[ %d ] = ",i);
     scanf("%f",&v[i]);
    }
    printf("\nO valor minimo do vetor V eh =  %.2f",minimo(n,v));
    return 0;
}
