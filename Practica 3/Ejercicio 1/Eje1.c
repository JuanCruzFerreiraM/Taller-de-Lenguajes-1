
#define LEN 3
#include <stdio.h>
struct rectangulo
    {
            float base;
            float altura;
    };

void inicializar (struct rectangulo *);
float area (struct rectangulo *);

int main()
{   float min = 4000;
    int posMin = 0;
    struct rectangulo recs[LEN];
    struct rectangulo *pt;
    pt = recs;
    for (int i = 0; i < LEN; i++) {
        printf("Ingrese los valores para el rectangulo en pos[%d]\n",i);
        inicializar(pt);
        pt++;
    }
    pt = recs;
    for (int i = 0; i< LEN; i++) {
        float areaS = area(pt);
        if (min > areaS) {
            min = areaS;
            posMin = i;
        }
        pt++;
    }
    printf("El area minima se encuentra en la pos[%d] y vale %f",posMin,min);
}

void inicializar (struct rectangulo *rect) {
     printf("Ingrese un valor para la base: ");
     scanf("%f",&rect->base);
     printf("Ingrese un valor para la altura: ");
     scanf("%f",&rect->altura);
}

float area (struct rectangulo *rec) {
    return rec->altura*rec->base;
}
