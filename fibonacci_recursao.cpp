#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if(n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n - 2);
    }
}
int main()
{
    int i;

    printf("imprime os 13 primeiros termos da serie fibonacci\n\n\n");
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", 
    fibonacci(1),fibonacci(2),fibonacci(3),
    fibonacci(4),fibonacci(5),fibonacci(6),
    fibonacci(7),fibonacci(8),fibonacci(9),
    fibonacci(10),fibonacci(11),fibonacci(12),
    fibonacci(13));
    return 0;
}