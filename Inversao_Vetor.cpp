#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void inverte (int n, float *v)
   {
    float aux;
    int i;
    for (i = 0 ; i < (n/2) ; i++)
    {
     aux=v[n-i-1];
     v[n-i-1]=v[i];
     v[i]=aux;
    }
   }

int main()
{
    int i,n;
    float v[100];
    printf("Insira um vetor com n posi��es (no m�ximo 100)\n");
    printf ("Digite a dimens�o do vetor (n) =  ");
    scanf ("%d",&n);
    for (i = 0 ; i < n ; i++)
    {
     printf("\nDigite V[ %d ] = ",i);
     scanf("%f",&v[i]);
    }
    inverte (n,v);
    for (i = 0 ; i < n ; i++)
    {
     printf("\nVetor Invertido V[ %d ] =  %f",i,v[i]);
    }

    return 0;
}