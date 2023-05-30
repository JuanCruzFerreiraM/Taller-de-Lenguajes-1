#include <stdio.h>

int main()
{
    FILE* arch;
    int precipitacion, maxP = 0, maxD;
    arch = fopen("precipitaciones.txt", "r");
    if (arch == NULL) { //Comprobamos si el archivo ingresado es valido
        printf("Error, puntero a archivo null/n");
        return -1;
    }

    for (int i = 1; i <= 31; i++) {
        fscanf(arch, "%d-", &precipitacion); //la funcion simplemente lee caracteres que cumplen con %d hasta encontrar un guion y los guarda en precipitaciones.                                   
        //Podriamos ademas comprobar por un error de asignacion.
        if (precipitacion > maxP) {
            maxP = precipitacion;
            maxD = i;
        }
    }

    printf("El %d/0 hubo %d precipitaciones, siendo este el mayor valor alcanzado en enero",maxD, maxP);
    return 0;
}
