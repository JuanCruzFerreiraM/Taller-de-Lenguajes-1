#include <stdio.h>

/*Se aclara que en el ejercicio la cadena 1 tiene suficiente espacio para almacenar la cadena dos, en caso de no ser asi, se deberian copiar los valores
hasta el caracter strlen - 1 y almacenar el caracter \0*/

void strcpy(char *, char *);
int strlen(char *);

int main()
{
    char cadena1[7] = "cadena"; // almacena c,a,d,e,n,a,\0
    char cadena2[5] = "hola";   // almacena h,o,l,a,\0
    strcpy(cadena1, cadena2);   // cadena 1 deberia tener valor h,o,l,a,\0,\0,\0;
    printf("Cadena 1 = %s\n", cadena1);
    for (int i = 0; i <= strlen(cadena1); i++)
    {
        printf("%c,", cadena1[i]);
    }
    return 0;
}

int strlen(char *string)
{
    int cant = 0;
    for (int i = 0; string[i] != '\0'; i++) // Itera siempre que el caracter en posicion i no sea /0.
    {           
        cant++; // No seria necesario comprobar si el caracter no es nulo, ya que de eso se encarga el iterador for.
    }
    return cant;
}

void strcpy(char *caden1, char *caden2)
{

    for (int i = 0; caden2[i] != '\0'; i++)
    {
        caden1[i] = caden2[i];
    }
    for (int i = strlen(caden2); i <= strlen(caden2); i++)
    {
        caden1[i] = '\0';
    }
}
