#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592653589793

struct retangulo
{
    float b;
    float h;
};
typedef struct retangulo Ret;

struct circulo
{
    float raio;
};
typedef struct circulo Circ;

Ret* ret_circunscrito (Circ* c, float h)
{
    Ret* rc = (Ret*) malloc (sizeof(Ret));
    rc->h = h;
    rc->b = sqrt(pow((c->raio*2),2)-pow(h,2));
    return rc;
}

Circ* circ_interno (Ret* r)
{
    Circ* cc = (Circ*) malloc (sizeof(Circ));
    if(r->h > r->b)
    {
        cc -> raio = r->b /2.0;
    }
    else
    {
        cc -> raio = r->h / 2.0;
    }
    return cc;
}

int main(void)
{
    Circ c;
    Ret r;
    Ret* r_circ;
    Circ* c_circ;
    int opcao;
    float h;
    printf("Programa para Encontrar Circulos ou Retangulos Circunscritos\n");
    printf("Insira 1: para circulo ou 2: para retangulo\n");
    scanf("%d",&opcao);
    switch (opcao)
    {
        case 1: 
            printf("Informe o Raio do Circulo\n");
            scanf("%f", &c.raio);
            printf("Informe a altura do retangulo a ser circunscrito (deve ser < %.2f)\n",2*c.raio);
            scanf("%f", &h);
            r_circ = ret_circunscrito (&c , h);
            printf("O maior retangulo circunscrito tem base = %.2f e altura = %.2f\n", r_circ->b,r_circ->h);
        break;
        case 2:
            printf("Informe a Base do Retangulo\n");
            scanf("%f",&r.b);
            printf("Informe a altura do Retangulo\n");
            scanf("%f",&r.h);
            c_circ=circ_interno(&r);
            printf("O maior circulo circunscrito tem raio = %.2f\n",c_circ->raio);
        break;
        default:
            printf("Opcao fora do limites\n");
            exit(1);
        break;
    }
    return 0;
}