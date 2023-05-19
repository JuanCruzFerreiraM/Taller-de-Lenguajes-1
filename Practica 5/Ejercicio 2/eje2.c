#include <stdio.h>

int main()
{
    FILE *f = fopen("archivoParaLeer.txt","r");
    int c;
    int min = 0, may = 0, dig = 0;
    if (f == NULL) {
        printf("Error al abrir el archivo \n");
        return 1;
    }
    while (!feof(f)) {
        c = fgetc(f);
        if ((c >= 'a') && (c <= 'z')) {
            min++;
        } else if ((c >= 'A') && (c <= 'Z')){
            may++;
        } else if ((c >= '0') && (c <= '9')) {
            dig++;
        }
    }
     printf("Numero de mayusculas %d, numero de minusculas %d, numero de digitos %d", may,min, dig);
    return 0;
}



