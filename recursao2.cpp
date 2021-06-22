#include <stdio.h>
float minimo(int n, float *v)
{
    float m;

    if(n == 1)
    {
        return v[0];
    }
    else
    {
        m = minimo(n-1,&v[1]);
        if(v[0] < m)
        {
            return v[0];
        }
        else
        {
            return m;
        }
    }
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