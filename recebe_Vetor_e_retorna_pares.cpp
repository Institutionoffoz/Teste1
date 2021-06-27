#include <stdio.h>
#include <stdlib.h>

int* somente_pares(int n, int* v, int* npares)
{
    int i, cont;
    cont = 0;
    for(i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            cont +=1;
        }
    }
    int *p = (int*)malloc(cont*sizeof(int));
    if(p == NULL)
    {
        printf("\nMemoria Insuficiente\n");
        exit(1);
    }
    cont = 0;
    for(i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            p[cont]=v[i];
            cont +=1;
        }
    }
    *npares = cont;
    return p;
}

int main()
{
    int i,n,pares;
    int* vet_par;
    printf("Insira um vetor com n posicoes\n");
    printf("Digite a dimensao do vetor (n)  =  ");
    scanf("%d", &n);
    int* v = (int*)malloc(n*sizeof(int));
    if(v == NULL)
    {
        printf("\nMemoria Insuficiente\n");
        exit(1);
    }
    for(i=0; i<n; i++)
    {
        printf("\nDigite V[%d]  =  ", i);
        scanf("%d", &v[i]);
    }
    vet_par = somente_pares(n,v,&pares);
    for(i=0;i<pares;i++)
    {
        printf("\nVetor Pares VetPar [%d] = %d", i, vet_par[i]);
    }
    free(v);
    free(vet_par);
    return 0;
}