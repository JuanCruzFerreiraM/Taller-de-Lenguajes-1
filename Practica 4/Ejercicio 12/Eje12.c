#include <stdio.h>
#include <stdlib.h>

void initMat(int *, int, int);
void printMat(int *, int, int);

int main()
{
    int *matriz, f, c;
    printf("Ingrese la cantidad de filas que desea que tenga la matriz: ");
    scanf("%d", &f);
    printf("Ingrese la cantidad de columnas que desea que tenga la matriz: ");
    scanf("%d", &c);
    matriz = (int *)malloc(f * c * sizeof(int));
    initMat(matriz, f, c);
    printMat(matriz, f, c);
    free(matriz);
    return 0;
}

void initMat(int *matriz, int f, int c)
{
    int elemento;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Ingrese un valor entero para agregar a la posicion [%d][%d]: ", i, j);
            scanf("%d", &elemento);
            *(matriz + (i * c) + j) = elemento;
        }
    }
}

void printMat(int *matriz, int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("El valor de la posicion [%d][%d] es %d\n", i, j, *(matriz + (i * c) + j));
        }
    }
}
