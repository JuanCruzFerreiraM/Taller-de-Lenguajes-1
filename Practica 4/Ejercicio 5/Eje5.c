#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANT 10

int cmpVMay(char);                      // compara el valor ascii para comprobar si es mayuscula
int cmpVMin(char);                      // compara el valor ascii para comprobar si es minisicula
void cantLetMyMi(int *, int *, char *); // devuelve la cantidad de mayusculas y minusculas de un string

int main()
{
    int may;
    int min;
    char *array;
    array = (char *)calloc(100, sizeof(char));
    for (int i = 0; i < CANT; i++)
    {
        may = 0;
        min = 0;
        printf("Ingrese un string de maximo 100 caracteres: \n");
        gets(array);
        cantLetMyMi(&min, &may, array);
        printf("La cantidad de mayusculas es %d y de minusculas %d\n", may, min);
    }
    free(array);
    return 0;
}

void cantLetMyMi(int *min, int *may, char *array)
{
    for (int i = 0; i < strlen(array); i++)
    {
        if (cmpVMay(array[i]))
        {
            (*may)++;
        }
        else if (cmpVMin(array[i]))
        {
            (*min)++;
        }
    }
}

int cmpVMay(char l)
{
    int ascii;
    ascii = (int)l;
    if ((ascii - 65) >= 0)
    {
        if ((ascii - 91) < 0)
        {
            return 1;
        }
    }
    return 0;
}

int cmpVMin(char l)
{
    int ascii;
    ascii = (int)l;
    if ((ascii - 97) >= 0)
    {
        if ((ascii - 123) < 0)
        {
            return 1;
        }
    }
    return 0;
}
