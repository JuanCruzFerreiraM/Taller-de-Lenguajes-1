#include <stdio.h>
#include <stdlib.h>

int **reservMem(int, int);
void initMat(int **, int, int);
void printMult(int **, int, int);
void freeMat(int **, int);
int main()
{
    int f, c, **matriz;
    printf("Ingrese la cantidad de filas que desea que tenga la matriz: ");
    scanf("%d", &f);
    printf("Ingrese la cantidad de columnas que desea que tenga la matriz: ");
    scanf("%d", &c);
    matriz = reservMem(f, c);
    initMat(matriz, f, c);
    printMult(matriz, f, c);
    freeMat(matriz, f);
    return 0;
}

int **reservMem(int f, int c)
{
    int **matriz;
    matriz = (int **)calloc(f, sizeof(int *));
    for (int i = 0; i < f; i++)
    {
        matriz[i] = (int *)calloc(c, sizeof(int));
    }
    return matriz;
}

void initMat(int **matriz, int f, int c)
{
    int elemento;
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("Ingrese un valor entero para la posicion [%d][%d]: ", i, j);
            scanf("%d", &elemento);
            matriz[i][j] = elemento;
        }
    }
}

void printMult(int **matriz, int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if ((matriz[i][j] % 3) == 0)
            {
                printf("El elemento de la posicion [%d][%d](%d) es multiplo de 3 \n", i, j, matriz[i][j]);
            }
        }
    }
}

void freeMat(int **matriz, int f)
{
    for (int i = 0; i < f; i++)
    {
        free(matriz[i]);
    }

    free(matriz);
}
