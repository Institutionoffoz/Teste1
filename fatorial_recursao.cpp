#include <stdio.h>
#include <stdlib.h>

int fatorial(int valor)
{
    if(valor<=1) return 1;
    return(valor * fatorial(valor-1));
}

int main()
{
    int fat, n;

    printf("digite um numero inteiro\n");
    scanf("%d", &n);
    if(n < 0)
    {
        printf("numero menor que zero, nao admite fatorial");
        return 1;
    }
    fat = fatorial(n);

    printf("\n Fatorial de %d = %d",n,fat);
    return 0;
}