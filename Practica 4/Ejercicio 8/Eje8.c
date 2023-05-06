#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Dudas a la hora de pasar los punteros de a las estructuras, siendo que quiero modificar el valor de los punteros que apuntan a las estructuras, aparentemente debo pasar un puntero que apunte a esos punteros*/
struct listaEnlazada
{
    int dato;
    struct listaEnlazada *sig;
};

typedef struct listaEnlazada lista;

void inicializarLista(lista **);
void eliminarLista(lista **);
void agregarInicio(lista **, int);
void agregarFinal(lista **, int);
int listaLen(lista *);
void printL(lista *);
void listaInvert(lista *, lista **);
void eliminarNodosMul(lista **, int);

int main()
{
    int elemento;
    lista *l = NULL;
    lista *invert = NULL;
    inicializarLista(&l);
    printL(l);
    printf("Ingrese un elemento para agregar al principio: ");
    scanf("%d", &elemento);
    agregarInicio(&l, elemento);
    printL(l);
    printf("Ingrese un elemento para agregar al final: ");
    scanf("%d", &elemento);
    agregarFinal(&l, elemento);
    printL(l);
    printf("En la lista hay %d elementos\n", listaLen(l));
    listaInvert(l, &invert);
    printL(invert);
    printf("Ingrese un valor para eliminar de la lista sus multiplos\n");
    scanf("%d", &elemento);
    eliminarNodosMul(&l, elemento);
    printL(l);
    eliminarLista(&l);
    eliminarLista(&invert);
    printL(invert);
    printL(l);
    return 0;
}

void inicializarLista(lista **l)
{
    lista *aux;
    lista *actual = NULL;
    int elemento;
    printf("Ingrese un valor entero, para finalizar ingrese 0\n");
    scanf("%d", &elemento);
    while (elemento != 0)
    {
        aux = actual;
        actual = malloc(sizeof(lista));
        actual->dato = elemento;
        actual->sig = aux;
        printf("Ingrese un valor entero, para finalizar ingrese 0\n");
        scanf("%d", &elemento);
    }
    *l = actual;
}

void eliminarLista(lista **l)
{
    lista *aux;
    while (*l != NULL)
    {
        aux = *l;
        *l = (*l)->sig;
        free(aux);
    }
}

void agregarInicio(lista **l, int n)
{
    if (l == NULL)
    {
        *l = malloc(sizeof(lista));
        (*l)->dato = n;
        (*l)->sig = NULL;
    }
    else
    {
        lista *aux = *l;
        *l = malloc(sizeof(lista));
        (*l)->dato = n;
        (*l)->sig = aux;
    }
}

void agregarFinal(lista **l, int n)
{
    lista *nuev = malloc(sizeof(lista));
    nuev->dato = n;
    nuev->sig = NULL;
    lista *act = *l;
    lista *ant = *l;
    while (act != NULL)
    {
        ant = act;
        act = act->sig;
    }
    if (*l == NULL)
    {
        *l = nuev;
    }
    else
    {
        ant->sig = nuev;
        nuev->sig = act;
    }
}

int listaLen(lista *l)
{
    int cant;
    lista *aux = l;
    while (aux != NULL)
    {
        cant++;
        aux = aux->sig;
    }
    return cant;
}

void printL(lista *l)
{
    lista *aux = l;
    while (aux != NULL)
    {
        printf("%d, ", aux->dato);
        aux = aux->sig;
    }
    printf("\n");
    if (l == NULL)
    {
        printf("La lista se encuentra vacia");
    }
}

void listaInvert(lista *original, lista **invert)
{
    lista *aux = original;
    while (aux != NULL)
    {
        agregarInicio(invert, aux->dato);
        aux = aux->sig;
    }
}

void eliminarNodosMul(lista **l, int n)
{
    lista *act = *l;
    lista *ant = *l;
    while (act != NULL)
    {
        if ((act->dato % n) == 0)
        {
            if (act == ant)
            {
                *l = act->sig;
                free(act);
                act = *l;
                ant = *l;
            }
            else
            {
                ant->sig = act->sig;
                free(act);
                act = ant->sig;
            }
        }
        else
        {
            ant = act;
            act = act->sig;
        }
    }
}
