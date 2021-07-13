#include <stdio.h>
#include <stdlib.h>

struct vetor
{
    float x;
    float y;
    float z;
};
typedef struct vetor Vetor;
float escalar (Vetor* v1, Vetor* v2)
{
    return((v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z));
}

int main(void)
{
    Vetor v1, v2;
    printf("Insira as Coordenadas dos Dois Vetores Tridimensionais\n");
    printf("Primeiro Vetor:\n");
    printf("V1.x = ");
    scanf("%f", &v1.x);
    printf("V1.y = ");
    scanf("%f", &v1.y);
    printf("V1.z = ");
    scanf("%f", &v1.z);
    printf("Segundo Vetor:\n");
    printf("V2.x = ");
    scanf("%f", &v2.x);
    printf("V2.y = ");
    scanf("%f", &v2.y);
    printf("V2.z = ");
    scanf("%f", &v2.z);
    printf("O Produto escalar de v1 x v2 = (%.2f;%.2f;%.2f)x(%.2f;%.2f;%.2f)  =  %.2f\n", v1.x,v1.y,v1.z,v2.x,v2.y,v2.z,escalar(&v1,&v2));
    return 0;
}