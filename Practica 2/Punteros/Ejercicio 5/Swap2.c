#include <stdio.h>
#include <stdlib.h>
#define LENG 5

void swap(int[], int, int*);

int main() {
    int array[LENG];
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    int *ultE = array+(LENG -1);
    for (int i= 0; i < LENG; i++){
        printf("El valor en [%d] es %d\n",i, array[i]);
    }
    swap(array, LENG, ultE);
    for (int i= 0; i < LENG; i++){
        printf("El valor en [%d] es %d\n",i, array[i]);
    }

    return 0;
}



//En principio asumimos que el valor de la dimL, es el igual a la dimesion fisica del vector



void swap(int ar [], int l, int * end) {
    int m = l/2;
    printf("%d", m);
    int aux;
    for (int i = 0; i < m; i++){
            aux = ar[i];
            ar[i] = *end;
            *end = aux;
            end--;

 }
}

