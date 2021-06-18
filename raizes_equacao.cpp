#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int raizes(double a, double b, double c, double *px1, double *px2)
{
    double delta;

    if(a == 0.0)
    {
        *px1 = *px2 = -c/b;
    }
    else
    {
        delta = b * b - 4 * a * c;
        if(delta < 0)
        {
            *px1 = *px2 = -3.14159265359;
        }
        else
        {
            if(delta == 0.0)
            {
                *px1 = *px2  = -b/(2*a);
            }
            else
            {
                delta = sqrt(delta);
                *px1 = (-b+delta)/(2*a);
                *px2 = (-b-delta)/(2*a);
            }
        }
    }
}

int main()
{
    double a, b, c;
    double x1, x2;

    printf("programa que calcula as raizes de uma equacao do segundo grau\n");
    printf("informe os coeficientes (a   b   c)\n");
    printf("informe a\n");
    scanf("%lf", &a);
    printf("informe b\n");
    scanf("%lf", &b);
    printf("informe c\n");
    scanf("%lf", &c);

    raizes(a,b,c,&x1,&x2);
    if(x1 == -3.14159265359)
    {
        printf("raizes reais inexistentes\n");
    }
    else
    {
        if(x1==x2)
        {
            printf("uma raiz real %.2lf\n", x1);
        }
        else
        {
            printf("duas raizes reais: %.2lf   ,     %.2lf\n", x1, x2);
        }
    }
    return 0;
}