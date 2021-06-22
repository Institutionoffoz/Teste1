#include <stdio.h>

#include <stdlib.h>

int main() {

    int altura;

    char sexo;

    float pesoIdeal;

    printf("Informe a altura:");

    scanf("%d", &altura);

    printf("Informe o sexo: <M ou F>");

    scanf("%c", &sexo);

    if (sexo == 'm' || sexo == 'M')

        pesoIdeal = (72.7 * altura) - 58;

    else

        pesoIdeal = (62.1 * altura) - 44.7;

    printf("O peso ideal e: %f", pesoIdeal);

 }