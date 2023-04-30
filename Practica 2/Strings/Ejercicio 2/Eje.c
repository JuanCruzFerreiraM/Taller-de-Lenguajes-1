#include <stdio.h>
#include <string.h>

int main(){
    char palabra[20];
    int cantP = 0;
    printf("Ingrese una palabra ");
    scanf("%s",palabra);
    while (strcmp(palabra,"XXX")){
        if (palabra[strlen(palabra) - 1] == 'o'){
            cantP++;
        }
        printf("Ingrese una palabra ");
        scanf("%s",palabra);
    }
    printf("La cantidad de palabras terminadas en o es de %d",cantP);
    return 0;
}
