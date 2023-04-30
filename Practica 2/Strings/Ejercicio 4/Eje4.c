#include <stdio.h>

int strlen(char *);

int main()
{
    char cadena[7] = "cadena";                               // guarda 7 valores, c,a,d,e,n,a,\0
    printf("La cadena posee %d caracteres", strlen(cadena)); // se espera que imprima 6.
    return 0;
}

int strlen(char *string)
{
    int cant = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {                                                        // Itera siempre que el caracter en posicion i no sea /0.
        cant++;                                             // No seria necesario comprobar si el caracter no es nulo, ya que de eso se encarga el iterador for.
    }
    return cant;
}

/*El codigo testea con una cadena de 6 caracteres, pero funciona para cadenas de N caracteres*/