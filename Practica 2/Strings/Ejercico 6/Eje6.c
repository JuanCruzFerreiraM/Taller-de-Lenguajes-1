#include <stdio.h>
#include <string.h>

/*Se aclara en el ejercicio que los string son todos de letras minisculas*/

void wordCounter(char *, int *palabras);

int main()
{
    char cadena[] = " electroencefalografista";
    int palabras[27] = {0}; // vector que alamcena la cantidad de veces que aparece una palabra de acuerdo a un indice
    wordCounter(cadena, palabras);
    for (int i = 0; i < 27; i++)
    {
        printf("El caracter %c aparecio %d veces\n", (i + 97), palabras[i]);
    }
}

void wordCounter(char *string, int *abecedario)
{
    for (int i = 0; string[i] != '\0'; i++)
    {

        abecedario[((int)string[i]) - 97]++;
    }
}

/*La linea 16 en el indice del vector abecedario, realiza en primer lugar una conversion del valor char al valor int, obteniendo el valor
del codigo ASCII para ese caracter, como los caracteres letras minusculas comienzan en el 97 (a) le restamos 97 para coincidir con los
valores de indice del vector, de el primer elemento seran las cantidades de a , el segundo la cantidad de b, etc.*/
