#include <stdio.h>
#include <string.h>

char *swapChars(char *, char, char);

int main()
{
    char cadena[20] = "oaoaoaoaaoaoaooaoaoaoa";
    char a = 'o';
    char b = 'c';
    char *cadenaP = cadena;
    cadenaP = swapChars(cadena, a, b);
    printf("La cadena resultante fue %s", cadenaP);
    return 0;
}

char *swapChars(char *cadena, char a, char b)
{
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] == a)
        {
            cadena[i] = b;
        }
    }
    return cadena;
}

//No seria necesario devolver cadena en la funcion swapChars ya que es un valor que ingresa mediante un puntero y por lo tanto es por referencia.