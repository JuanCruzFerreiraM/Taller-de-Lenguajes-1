#include <stdio.h>
#define COL 2

void matrizTrans(char[][COL], char [][COL], int);

int main(){
    char matrizOrg[2][COL] = {{'a','b'},{'c','d'}};
    char matrizRes[2][COL] = {0};
    matrizTrans(matrizOrg,matrizRes, 2);
    for (int i=0; i < 2; i++){
    for (int j = 0; j < COL; j++) {
        printf("Valor en [%d][%d] = %c\n", i,j, matrizRes[i][j]);
    }
}
    return 0;
}

void matrizTrans(char matrizOrgl[][COL], char matrizRes[][COL], int f){

for (int i=0; i < f; i++){
    for (int j = 0; j < COL; j++) {
        matrizRes[i][j] = matrizOrgl[j][i];
    }
}

}
