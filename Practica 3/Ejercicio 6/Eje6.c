#include <stdio.h>
#include <string.h>
#include <time.h>
struct fech
{
    unsigned int tipo;
    union
    {
        time_t f_unix;  // tiempo transcurrido en segundos desde 1-1-1970, la llamamos de tipo 0
        char fecha[11]; // fecha escrita en forma dd-mm-aaaa, el ultimo carater almacena \0 la llamamos de tipo 1
    } datosF;
};

typedef struct fech fecha;
int comparacion(fecha, fecha);

int main()
{
    fecha f1;
    fecha f2;

    f1.tipo = 1;
    f1.datosF.f_unix = time(NULL);

    f2.tipo = 2;
    strcpy(f2.datosF.fecha, "18-04-2023");

    if (!comparacion(f1, f2))
    {
        printf("Las fechas son iguales");
    }
    else
    {
        printf("Las fechas son distintas");
    }
    return 0;
}

int comparacion(fecha f1, fecha f2)
{
    if (f1.tipo == f2.tipo)
    { // ambos valores son del mismo tipo, hay que compararlos
        if (f1.tipo == 1)
        {
            return (f1.datosF.f_unix == f2.datosF.f_unix);
        }
        else
        {
            return strcmp(f1.datosF.fecha, f2.datosF.fecha);
        }
    }
    else
    { // son distintos hay que converir tipos
        struct tm *struct_tm;
        if (f1.tipo == 1)
        {
            struct_tm = localtime(&f1.datosF.f_unix);
            char timeF1[11];
            strftime(timeF1, sizeof(timeF1), "%d-%m-%Y", struct_tm);
            return strcmp(timeF1, f2.datosF.fecha);
        }
        else
        {
            struct_tm = localtime(&f2.datosF.f_unix);
            char timeF2[11];
            strftime(timeF2, sizeof(timeF2), "%d-%m-%Y", struct_tm); // convierte el dato de localtime en un string
            return strcmp(timeF2, f1.datosF.fecha);
        }
    }
}
