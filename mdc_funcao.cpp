#include <stdio.h>
#include <stdlib.h>

int mdc(int x, int y)
{
    int r;
    r = x % y;
    if(r == 0)
        return y;
    else
        return mdc(y,r);
}

int main()
{
    int x,y,z;
    printf("encontre o maximo divisor comum entre dois numeros (MDC)\n");
    printf("Informe o primeiro numero\n");
    scanf("%d", &x);
    printf("Informe o segundo numero\n");
    scanf("%d", &y);
    printf("Informe o terceiro numero\n");
    scanf("%d", &z);
    printf("o MDC (%d %d %d) = %d", x, y, z, mdc(mdc(x,y), z));
    return 0;
}