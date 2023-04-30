#include <stdio.h>
#include <string.h>

/*Cabe aclarar que la funcion en principo no considera valores en UpperCase, la solucion para eso seria comparar tambien con el valor ASCII de la letra mayuscula
o crear una funcion que pase todos los valores a lowercasse*/

int esPalidroma(char *);

int main()
{
    char cadena[20] = "sometemos";
    int boolean;
    boolean = esPalidroma(cadena);
    if (boolean == 1)
    {
        printf("La cadena %s es palidroma", cadena);
    }
    else
    {
        printf("La cadena %s no es palidroma", cadena);
    }
    return 0;
}

int esPalidroma(char *cadena)
{
    int f = strlen(cadena) - 1;           // ultimo caracter de la cadena.
    int medio = (strlen(cadena) - 1) / 2; // caracter medio de la cadena.
    for (int i = 0; i < medio; i++, f--)
    {
        if (cadena[i] != cadena[f]) // en caso de que las letras no sean coincidentes ya la cadena no es palidroma y podemos retornar.
        { 
            return 0;
        }
    }
    return 1;
}
