#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define CANT 48

struct cart
{
    int numero;
    char palo[12];
};

typedef struct cart carta;

void barajar(carta[]);
void iniciarMazo(carta[]);
void imprimirMazo(carta[]);
carta obtenerCarta(carta[]);
void imprimirCarta(carta);
int main()
{
    carta mazo[CANT];
    iniciarMazo(mazo);
    barajar(mazo);
    imprimirMazo(mazo);
    imprimirCarta(obtenerCarta(mazo));
    imprimirCarta(obtenerCarta(mazo));
    return 0;
}

void iniciarMazo(carta mazo[])
{
    char palo[4][12] = {{"ORO"}, {"ESPADA"}, {"BASTO"}, {"COPA"}};
    int c = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            mazo[c].numero = j;
            strcpy(mazo[c].palo, palo[i]);
            c++;
        }
    }
}

void imprimirMazo(carta mazo[])
{
    for (int i = 0; i < 48; i++)
    {
        printf("Carta: %d de %s\n", mazo[i].numero, mazo[i].palo);
    }
}

void barajar(carta mazo[])
{
    srand(time(NULL));
    for (int i = 0; i < 48; i++)
    {
        int c = rand() % 48;
        carta aux = mazo[i];
        mazo[i] = mazo[c];
        mazo[c] = aux;
    }
}

carta obtenerCarta(carta mazo[])
{
    carta sacada = mazo[0];
    for (int i = 0; i <= 47; i++)
    {
        mazo[i] = mazo[i + 1];
    }
    return sacada;
}

void imprimirCarta(carta car)
{
    printf("Carta obtenida: %d de %s\n", car.numero, car.palo);
}
