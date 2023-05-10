#include <stdio.h>
#include <stdlib.h>

/*Ambas versiones del ejercicio se encuentran realizadas en este archivo de codigo*/

double *reservMem(int);
void initArray(double *, int n);
double promCalcP(double *, int n);
double promCalcA(double *, int n);

int main()
{
    double *ptr;
    int n;
    printf("Ingrese la cantidad de elementos que desea que contenga el arreglo: ");
    scanf("%d", &n);
    ptr = reservMem(n);
    initArray(ptr, n);
    printf("El valor promedio obtenido usando notacion de punteros fue %lf\n", promCalcP(ptr, n));
    printf("El valor promedio obtenido usando notacion de arreglos fue %lf", promCalcA(ptr, n));
    free(ptr);
    return 0;
}

double *reservMem(int n)
{
    double *array = (double *)calloc(n, sizeof(double));
    return array;
}

void initArray(double *array, int n)
{
    double aux;
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese un valor double para agregar a el arreglo: ");
        scanf("%lf", &aux);
        array[i] = aux;
    }
}

double promCalcP(double *array, int n)
{
    double suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += *(array + i);
    }
    return suma / n;
}

double promCalcA(double *array, int n)
{
    double suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += array[i];
    }

    return suma / n;
}
