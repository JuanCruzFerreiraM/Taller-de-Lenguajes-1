#include <stdio.h>
#define CANT 10

int main() {
    unsigned long  num;
    int d;
    int vect [CANT] = {0};
    printf("Ingrese un numero entero positivo = ");
    scanf("%ld", &num);
    while (num != 0) {
        d = num % 10;
        num = num / 10;
        vect[d]++;
    }
    for (int i = 0; i < CANT; i++){
        printf("El valor %d aparecio %d veces \n",i,vect[i]);
    }

    return 0;
}
