#include <stdio.h>
#include <stdlib.h>


int** reservMem(int);
void initPiram(int **, int);
void printP(int **, int);
void freeP(int **, int);

int main()
{
    int n;
    printf("Ingrese el numero de filas que desea que tenga la piramide de pascal: ");
    scanf("%d", &n);
    int ** piramide = reservMem(n);
    initPiram(piramide,n);
    printP(piramide, n);
    freeP(piramide, n);
    return 0;
}

int ** reservMem(int n){
    int **piramide = (int **) calloc(n, sizeof(int *));
    for (int i = 0; i < n; i++) {
        piramide[i] = (int *)  calloc((i+1), sizeof(int)); //el numero de "columnas" es igual a la fila
    }
    return piramide;
}

void initPiram(int **piramide, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            if ((j == 0) || (j == i)) {
                piramide[i][j] = 1;
            } else {
                piramide[i][j] = piramide[i-1][j-1] + piramide[i-1][j]; 
            }
        }
    }
}

void printP(int **piramide, int n) {
    for (int i = 0; i< n; i++) {
        for (int j = 0; j <= i; j++) {
            printf(" %d ", piramide[i][j]);
        }
        printf("\n");
    }
}

void freeP(int ** piramide, int n ) {
    for (int i = 0; i < n; i++) {
        free(piramide[i]);
    }
    free(piramide);
}