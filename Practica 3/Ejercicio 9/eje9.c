#include <stdio.h>
#include <string.h>

typedef enum
{
    Lunes,
    Martes,
    Miercoles,
    Jueves,
    Viernes,
    Sabado,
    Domingo
} dias;

void imprimirDiasVec();
void imprimirDiasSwitch();

int main()
{

    imprimirDiasVec();
    imprimirDiasSwitch();
    return 0;
}

void imprimirDiasVec()
{
    char semana[7][20] = {{"Lunes"}, {"Martes"}, {"Miercoles"}, {"Jueves"}, {"Viernes"}, {"Sabado"}, {"Domingo"}};
    printf("%s \n", semana[Lunes]);
    printf("%s \n", semana[Martes]);
    printf("%s \n", semana[Miercoles]);
    printf("%s \n", semana[Jueves]);
    printf("%s \n", semana[Viernes]);
    printf("%s \n", semana[Sabado]);
    printf("%s \n", semana[Domingo]);
}

void imprimirDiasSwitch()
{
    for (int i = 0; i < 7; i++)
    {
        switch (i)
        {
        case (Lunes):
            printf("%s\n", "Lunes");
            break;
        case (Martes):
            printf("%s\n", "Martes");
            break;
        case (Miercoles):
            printf("%s\n", "Miercoles");
            break;
        case (Jueves):
            printf("%s\n", "Jueves");
            break;
        case (Viernes):
            printf("%s\n", "Viernes");
            break;
        case (Sabado):
            printf("%s\n", "Sabado");
            break;
        case (Domingo):
            printf("%s\n", "Domingo");
            break;
        }
    }
}