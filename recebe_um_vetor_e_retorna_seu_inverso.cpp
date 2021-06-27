#include <stdio.h>
#include <stdlib.h>

float* reverso(int n, float* v)
{
    int i;
    float* p = (float*)malloc(n* sizeof(float));
    if(p==NULL)
    {
        printf("\nMemoria Insuficiente\n");
        exit(1);
    }
    for(i=n-1; i>=0; i--)
    {
        p[i] = v[n-i-1];
    }
    return p;
}

int main()
{
    int i, n;
    printf("\nInsira um vetor com n posicoes\n");
    scanf("%d", &n);
    float* v = (float*)malloc(n * sizeof(float));
    if(v == NULL)
    {
        printf("\nMemoria Insuficente\n");
        exit(1);
    }
    float* inv;
    for(i=0; i<n; i++)
    {
        printf("\nDigite o V[ %d ] =    ", i);
        scanf("%f", &v[i]);
    }
    inv = reverso(n,v);
    for(i=0; i<n; i++)
    {
        printf("\nVetor Original V[%d] = %.2f        Vetor Invertido Inv[%d] = %.2f", i, v[i], i, inv[i]);
    }
    free(v);
    free(inv);
    return 0;
}