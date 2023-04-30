#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char palabra[20];
    int cantP = 0;
    printf("Ingrese una palabra ");
    scanf("%s",palabra);
    while (strcmp(palabra,"ZZZ") != 0){
        if (strlen(palabra) == 5) {
            cantP++;
        }
        printf("Ingrese una palabra ");
        scanf("%s",palabra);
    }
    printf("Cantidad de palabras con 5 carac = %d",cantP);
    return 0;
}

