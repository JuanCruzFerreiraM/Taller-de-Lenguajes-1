#include <stdio.h>
#include <string.h>
#define LEN 30

typedef struct direccion
{
    char calle[50];
    char ciudad[30];
    int codigo_postal;
    char pais[40];
} direccion;

struct alumn
{
    char apellido[50];
    char nombre[50];
    char legajo[8];
    float promedio;
    direccion domicilio;
};

typedef struct alumn alumno;

void inicializar(alumno *);

int main()
{
    alumno alumnos[LEN];
    for (int i = 0; i < LEN; i++)
    {
        alumno alumn, *ptr;
        ptr = &alumn;
        inicializar(ptr);
        alumnos[i] = alumn;
    }

    float min = 0;
    alumno mejorProm;
    for (int i = 0; i < LEN; i++)
    {
        if (min < alumnos[i].promedio)
        {
            min = alumnos[i].promedio;
            mejorProm = alumnos[i];
        }
    }

    printf("El alumno con el mejor promedio fue %s %s", mejorProm.nombre, mejorProm.apellido);

    return 0;
}

void inicializar(alumno *al)
{
    printf("Ingrese el apellido del alumno\n");
    scanf("%s", (al->apellido));
    printf("Ingrese el nombre del alumno\n");
    scanf("%s", (al->nombre));
    printf("Ingrese el legajo del alumno\n");
    scanf("%s", (al->legajo));
    printf("Ingrese el promedio del alumno\n");
    scanf("%f", &(al->promedio));
    printf("Ingrese la calle del alumno\n");
    scanf("%s", al->domicilio.calle);
    printf("Ingrese la ciudad del alumno\n");
    scanf("%s", (al->domicilio.ciudad));
    printf("Ingrese el codigo postal del alumno\n");
    scanf("%d", &(al->domicilio.codigo_postal));
    printf("Ingrese el pais del alumno\n");
    scanf("%s", (al->domicilio.pais));
}
