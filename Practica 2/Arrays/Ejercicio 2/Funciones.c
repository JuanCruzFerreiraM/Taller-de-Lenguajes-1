#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define INDICE 10
float prom (float [], int );
float min (float [], int);
int max (float [], int);
void inicializador(float [], int);

int main() {
    float numeros [INDICE];
    inicializador(numeros, INDICE);
    for (int i = 0; i <= INDICE; i++){
        printf("Elemento en posicion %d = %f \n", i, numeros[i]);
    }
    printf("Valor promedio = %f\n", prom(numeros,INDICE));
    printf("Valor minimo = %f\n", min(numeros,INDICE));
    printf("Posicion del valor maximo = %d\n", max(numeros,INDICE));
    return 0;
}

void inicializador(float a [], int l) {
    srand(time(NULL));
    for (int i = 0; i <= l; i++) {
        a[i] = rand() % 5000;
    }
}

float prom (float a [], int l){
 float suma = 0;
 for (int i = 0; i <= l; i++) {
    suma += a[i];
 }
 return (suma / l);
}

float min (float a [], int l) {
    float min = 5200.0;
    for (int i = 0; i <= l; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    return min;
}

int max (float a [], int l) {
    float max = 0;
    int pos;
    for (int i = 0; i <= l; i++) {
        if (a[i] > max) {
            max = a[i];
            pos = i;
        }
    }
    return pos;
}
