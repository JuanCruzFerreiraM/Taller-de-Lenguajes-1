#include <stdio.h>
#define COL 3

void suma(int[][COL],int[][COL],int[][COL],int);

int main() {
    int operando1[2][COL] = {{1,3,1},{1,0,0}};
    int operando2[2][COL] = {{0,0,5},{7,5,0}};
    int resultado[2][COL];
    suma(operando1,operando2,resultado,2);
     for (int i = 0; i < 2; i++){
        for (int j = 0; j < COL; j++){
            printf("Valor del resultado en [%d][%d] = %d\n",i,j,resultado[i][j]);
        }
    }
        return 0;
}




void suma(int operando1[][COL],int operando2[][COL],int resultado[][COL],int f){

    for (int i = 0; i < f; i++){
        for (int j = 0; j < COL; j++){
            resultado[i][j] = operando1[i][j] + operando2[i][j];
        }
    }
}

