#include <Stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265359

float volume(float raio, float altura)
{
    return((PI*altura*altura)*(3*raio - altura)/3.0);
}

int main()
{
    float raio, altura;
    printf("programa que calcula o volume de uma esfera com um furo cilindrico\n");
    printf("informe o raio da esfera\n");
    scanf("%f", &raio);
    printf("informe a altura da esfera\n");
    scanf("%f", &altura);
    printf("volume da esfera: %.2f", volume(raio,altura));
    return 0;
}