#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CANT 3600

int main() {
    srand(time(NULL));
    float precipitaciones[CANT];
    int years [10];
    for (int r = 0; r < CANT; r++){
        precipitaciones[r] = rand() % 500;
    }
    int i = 0;
    int year = 0;
    int yearMin;
    float minY = (float) RAND_MAX;
    while (i < CANT) {
        int contadorD = 0;
        float sumaT = 0;
        int mes = 1;
        float minM = (float) RAND_MAX;
        while ((contadorD != 360) && (i<CANT)){
            float sumaM = 0;
            while (((contadorD/mes) != 30) && (i < CANT)) {
                   sumaT += precipitaciones[i];
                   sumaM += precipitaciones[i];
                   printf("%f\n", sumaT);
                   contadorD++;
                   i++;
            }
            if (sumaM < minM) {
                minM = sumaM;
                years[year] = mes;
            }
            mes++;
        }
        if ((sumaT / 12) < minY) {
            minY = (sumaT /12);
            yearMin = year;
        }
        year++;
    }

    printf("El year con menor promedio de precipitaciones fue %d\n",yearMin+2010);
    for (int j = 0; j < 10; j++){
        printf("El mes con menos precipitaciones del year %d fue %d\n",j+2010,years[j]);
    }

    return 0;
}

