#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CUANTOS 50

void arreglo(int *, int *, int[], int);
int main (){
    int array[CUANTOS];
    int * imPP, *parIP, imP = 0, parI = 0;
    imPP = &imP;
    parIP = &parI;
    arreglo(imPP,parIP,array,CUANTOS);
    printf("Cantidad de pares en impares %d, cantidad de impares en pares %d", imP, parI);
    return 0;
}
void arreglo (int * imP, int * parI, int a [], int l){
    srand(time(NULL));
    int num;
    for (int i = 0; i <= l; i++) {
        num = rand() % 100;
        if ((i % 2 != 0)&& (num % 2 == 0)){
            *imP = *imP + 1;
        } else if ((i%2 == 0)&&(num %2 != 0)) {
            *parI = *parI + 1;
        }
        a[i] = num;
    }
}
