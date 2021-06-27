#include <stdio.h>
#include <stdlib.h>

/* Exercicio 3 Cap. 7 Livro Texto - Programa para Lidar com Matrizes Triangulares Inferiores */

float** ti_cria (int n)
{
    int i,j;
    float** tinf = (float**) malloc(n*sizeof(float*)); /* criamos espaco para todas as linhas */
    if (tinf == NULL)
    {
        printf("Memoria Insuficiente!\n");
        exit(1); /* ABORTA O PROGRAMA */
    }
    /* agora para cada linha criamos o espaco necessario para armazenar os elementos da triangular*/
    for (i=0 ; i < n ; i++)
    {
        tinf[i] = (float*) malloc((i+1)*sizeof(float));
        if (tinf[i] == NULL)
        {
            printf("Memoria Insuficiente!\n");
            exit(1); /* ABORTA O PROGRAMA */
        }
    }
    /* Agora preenchemos todos os elementos com zero */
    for (i=0 ; i < n; i++)
        for (j=0 ; j < i ; j++)
            tinf[i][j] = 0.0;
    return (tinf);
}

void ti_atribui (int i, int j, float x, float** mat)
{
    mat[i-1][j-1] = x;
}

float ti_acessa (int i, int j, float** mat)
{
    if ((j-1) > (i-1)) return 0.0;
    else return mat[i-1][j-1];
}

void ti_libera (int n, float** mat)
{
    int i;
    for (i = 0 ; i < n ; i++) free (mat[i]);
    free(mat);
}

int main()
{
    /* Esta é a funcao main para tratar do funcionamento do Exercicio 3 Cap. 7 Livro Texto
       Programa para Lidar com Matrizes Triangulares Inferiores */
    int i,j,n;
    int flag = 0;
    float** MAT_TI;
    float elem;
    printf("\nInsira a dimensao da Matriz Triangular Inferior (n) =");
    scanf ("%d",&n);
    MAT_TI = ti_cria(n);
    printf("Elementos da Matriz Triangular Inferior");
    for (i = 0 ; i < n ; i++)
    {
     printf("\n");
     for (j = 0 ; j <= i ; j++)
     {
       printf("mat[%d][%d] = %.2f   ",i,j,MAT_TI[i][j]);
     }
    }
    do
    {
        printf("\nVocê quer inserir os Elementos da Matriz Triangular Inferior");
        printf("\nSe quiser continuar inserindo elementos digite zero ? ");
        scanf ("%d",&flag);
        if (flag == 0)
        {
            printf("\nDigite o Numero da Linha do Elemento a ser inserido = ");
            scanf ("%d",&i);
            printf("\nDigite o Numero da Coluna do Elemento a ser inserido = ");
            scanf ("%d",&j);
            if ((i < j) || (i > n) || (j > n)) printf("\nDimensoes fora dos Limites");
            else
            {
                printf("\nDigite o Valor do Elemento a ser inserido = ");
                scanf ("%f",&elem);
                ti_atribui(i,j,elem,MAT_TI);
            }
        }
    } while (flag == 0);
    printf("Elementos da Matriz Triangular Inferior");
    for (i = 1 ; i <= n ; i++)
    {
     printf("\n");
     for (j = 1 ; j <= n ; j++)
     {
       printf("mat[%d][%d] = %.2f   ",i,j,ti_acessa(i,j,MAT_TI));
     }
    }
    ti_libera(n,MAT_TI);
    return 0;
}