#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Escreva uma função recursiva que calcule a soma dos primeiros n cubos: S = 1³ + 2³ + ... + n³ */

int cubo (int valor)
   {
    if (valor <= 1) return 1;
    return (pow(valor,3) + cubo(valor-1));
   }

int main()
{
    int soma_cubos, n, i;
    printf ("Digite um numero inteiro  ");
    scanf ("%d",&n);
    if (n <= 0)
       {
         printf ("Número menor ou igual a zero, fora dos limites da função");
         return 1;
       }
    soma_cubos = cubo(n);

    printf("\n Somatório dos Cubos de %d ate 1 = %d",n,soma_cubos,"\n");
    return 0;
}