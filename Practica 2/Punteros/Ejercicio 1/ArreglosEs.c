#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LENGTH 10

void inicializador(float [], int);
float * arrayWork(float [], int, float *);

int main(){
    float array[LENGTH], param[3];
    inicializador(array,LENGTH);
    arrayWork(array,LENGTH,param);
       for (int i = 0; i <= LENGTH; i++){
        printf("Elemento en posicion %d = %f \n", i, array[i]);
    }
    printf("La posicion con el valor maximo es %f\n", *param);
    printf("El valor minimo fue: %f\n",*(param + 1));
    printf("El valor promedio fue: %f",*(param + 2));
    return 0;
}

void inicializador(float a [], int l) {
    srand(time(NULL));
    for (int i = 0; i <= l; i++) {
        a[i] = rand() % 5000;
    }
}

float * arrayWork(float a[],int l, float * res) {
    float suma = 0;
    float min = 5200.0;
    float max = 0;
    int pos;
    for (int i = 0; i <= l; i++) {
         if (a[i] > max) {
            max = a[i];
            pos = i;
            }
        if (a[i] < min) {
            min = a[i];
        }
        suma += a[i];


    }
    res[0] = pos;
    res[1] =  min;
    res[2] = suma/l;
    return res;
}
