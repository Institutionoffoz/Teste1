#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct ponto
{
    float x;
    float y;
};
typedef struct ponto Ponto;
int dentroRet(Ponto* v1, Ponto* v2, Ponto* p)
{
    if((p->x >= v1->x) && (p->x <= v2->x) && (p->y >= v1->y) && (p->y <= v2->y))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    Ponto v1, v2, p;
    printf("Insira as Coordenadas dos Vertices do Retangulo\n");
    printf("Vertice Inferior Esquerdo:\n");
    printf("V1.x = ");
    scanf("%f",&v1.x);
    printf("V1.y = ");
    scanf("%f",&v1.y);
    printf("Vertice Superior Direito:\n");
    printf("V2.x = ");
    scanf("%f",&v2.x);
    printf("V2.y = ");
    scanf("%f",&v2.y);
    printf("Vertice Inferior Esquerdo: v1 = (%.2f  ;  %.2f)\nVertice Superior Direito: v2 = (%.2f  ;  %.2f)\n", v1.x, v1.y, v2.x, v2.y);
    printf("Insira as Coordenadas do Ponto que se que verificar se esta no interior do Retangulo\n");
    printf("p.x = ");
    scanf("%f", &p.x);
    printf("p.y = ");
    scanf("%f", &p.y);
    if(dentroRet (&v1, &v2, &p))
    {
        printf("O ponto p = (%.2f  ;  %.2f) esta no interior do Retangulo\n", p.x, p.y);
    }
    else
    {
        printf("O ponto p = (%.2f  ;  %.2f) nao esta no interior do Retangulo\n", p.x, p.y);
    }
    return 0;
}