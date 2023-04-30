#include <stdio.h>

struct pun3D {
    float x;
    float y;
    float z;
};

typedef struct pun3D punto3D;

int main()
{   
    struct pun3D pun;
    punto3D pun2;
    punto3D puntos[4];
    printf("%lu\n",sizeof(pun)); //imprime el valor 12, esto se debe a que esta compuesto por 3 variables float de 4 bytes cada una.
    printf("%lu\n", sizeof(pun2)); //imprime el valor 12, ya que es otra forma de referirse a los valores de struct pun3D.
    printf("%lu\n", sizeof(puntos)); //imprime el valor 48, ya que son 4 valores del size de la estructura pun3D.
    return 0;
}
