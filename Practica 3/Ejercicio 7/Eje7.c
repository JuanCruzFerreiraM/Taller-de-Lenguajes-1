#include <stdio.h>
#include <string.h>

struct est
{
    int tipo;
    char apellido[50];
    char nombre[50];
    int legajo;
    union
    {
        char pasaporte[20];
        int dni; // se podria trabajar con valores long int
    } ident;
};

typedef struct est estudiante;

estudiante cargarEstudiante();

int main()
{
    estudiante e = cargarEstudiante();
    printf("Nombre: %s\n", e.nombre);
    printf("Apellido: %s\n", e.apellido);
    printf("Legajo: %d\n", e.legajo);
    if (e.tipo == 0)
    {
        printf("DNI: %d\n", e.ident.dni);
    }
    else
        printf("Pasaporte: %s\n", e.ident.pasaporte);
    return 0;
}

estudiante cargarEstudiante() // se podria cargar primero todos los datos y hacer el if solo para los ultimos casos, cuestion de mejor codigo pero igual eficiencia.
{
    estudiante newStudent;
    printf("Ingrese si es un extrangenero o no (0 = no | 1= si)\n");
    scanf("%d", &newStudent.tipo);
    if (newStudent.tipo == 0)
    {
        printf("Ingrese el apellido del estudiante\n");
        scanf("%s", newStudent.apellido);
        printf("Ingrese el nombre del estudiante\n");
        scanf("%s", newStudent.nombre);
        printf("Ingrese el legajo del estudiante\n");
        scanf("%d", &newStudent.legajo);
        printf("Ingrese el DNI del estudiante\n");
        scanf("%d", &newStudent.ident.dni);
    }
    else
    {
        printf("Ingrese el apellido del estudiante\n");
        scanf("%s", newStudent.apellido);
        printf("Ingrese el nombre del estudiante\n");
        scanf("%s", newStudent.nombre);
        printf("Ingrese el legajo del estudiante\n");
        scanf("%d", &newStudent.legajo);
        printf("Ingrese el pasaporte del estudiante\n");
        scanf("%s", newStudent.ident.pasaporte);
    }
    return newStudent;
}
