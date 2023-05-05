#include <stdio.h>
#include <stdlib.h>

void reservaMem(void **, int);
void inicialiVec(int *, int);
int findMax(int *, int);
int main()
{
    int max, n;
    void *ptr;
    printf("Ingrese la cantidad de elementos que desea que tenga el arreglo de enteros: ");
    scanf("%d", &n);
    reservaMem(&ptr, n);
    inicialiVec(ptr, n);
    max = findMax(ptr, n);
    printf("El valor maximo encontrado en el array fue: %d", max);
    free(ptr);
    return 0;
}

void reservaMem(void **ptr, int n) // No modifica el valor de ptr, por lo que le  paso un puntero a puntero, habría que preguntarlo
{
    *ptr = (int *)calloc(n, sizeof(int));
}

void inicialiVec(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        ptr[i] = rand() % 100;
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }
}

int findMax(int *ptr, int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] > max)
        {
            max = ptr[i];
        }
    }
    return max;
}