#include <stdio.h>
#include <stdlib.h>

void reserveMem(void **, int);
void initializeMem(float *, int);
float findMax(float *, int);
int main()
{
    int n;
    void *ptr;

    printf("Ingrese el numero de elementos que desea que tenga el array: ");
    scanf("%d", &n);
    reserveMem(&ptr, n);
    initializeMem(ptr, n);
    printf("El valor maximo hallado en el array fue: %f", findMax(ptr, n));
    free(ptr);
    return 0;
}

void reserveMem(void **ptr, int n)
{
    *ptr = (float *)calloc(n, sizeof(float));
}

void initializeMem(float *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese un valor de tipo flotante: ");
        scanf("%f", &ptr[i]);
    }
}

float findMax(float *ptr, int n)
{
    float max = -10000;
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] > max)
        {
            max = ptr[i];
        }
    }
    return max;
}
