#include <stdio.h>
#include <stdlib.h>
//se pueden almacenar las tuplas mediante una lista enlazada pero no tenia ganas de implementarla.
struct tup {
 int codigo;
 float total;
};

typedef struct tup tupla;


int main()
{   FILE* archApuestas = fopen("apuestas.txt", "r");
    float apuestaTotal = 0;
    if (archApuestas == NULL) {
        printf("Error puntero nulo a apuestas\n");
        return -1;
    }

    tupla aux;
    while(!feof(archApuestas)) {
        fscanf(archApuestas, "%d|%f;", &(aux.codigo), &(aux.total));
        printf("%d|%f\n",aux.codigo, aux.total);
        apuestaTotal += aux.total;
    } //comprobar porque ejecuta una vez mas. 
    printf("La apuesta total fue de $%f\n", apuestaTotal);
    return 0;
}
