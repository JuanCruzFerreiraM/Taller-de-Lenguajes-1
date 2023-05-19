#include <stdio.h>
#include <stdlib.h>


int * divisores(int, int*);
void printDiv(int *, int, int );
int main()
{   int n, *arrayD, dimL = 0;
    printf("Ingrese un numero para calcular sus divisores: ");
    scanf("%d", &n);
    arrayD = divisores(n, &dimL);
    printDiv(arrayD, dimL, n);
    free(arrayD);
    return 0;
}

int * divisores(int n, int* dimL) {
    int * div = NULL; //inicia en null para que en el primer caso realloc funcione como malloc
    for (int i = 1; i <= n; i++) {
        if ((n % i) == 0) {
            (*dimL)++;
            div = realloc(div, (*dimL)*sizeof(int)); //reserva nueva memoria y copia lo anterior
            div[(*dimL) - 1] = i;
        }
    }
    return div;
}

void printDiv(int *div, int dimL, int n) {
    printf("Los divisores de %d son: \n", n);
    for (int i=0; i < dimL; i++) {
        printf("%d ", div[i]);
    }
}
