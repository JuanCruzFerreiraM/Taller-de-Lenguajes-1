#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ** reservMat(int );
void initMat(int **, int);
void printMat(int **, int);
void freeMat(int **, int);
int main()
{
    srand(time(NULL));
    int n, **matriz;
    printf("Ingrese la cantidad de filas que desea que contenga la matriz: ");
    scanf("%d", &n);
    matriz = reservMat(n);
    initMat(matriz, n);
    printf("Se omiten los valores en 0 de la matriz para optimizar el espacio\n");
    printMat(matriz,n);
    freeMat(matriz, n);
    return 0;
}

int ** reservMat(int n) {
    int  **matriz = (int **) calloc(n, sizeof(int *));
    for (int i = 0; i < n; i++) {
        matriz[i] = (int *) calloc((i + 1), sizeof(int));
    }
    return matriz;
}

void initMat(int ** matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            matriz[i][j] = rand() % 21;
        }
    }
}

void printMat(int ** matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            printf("El valor en la posicion [%d][%d] es %d\n", i, j, matriz[i][j]);
        }
    }
}

void freeMat(int **matriz, int n) {
    for (int i = 0; i < n; i++) {
        free(matriz[i]);
    }
    free(matriz);
}
