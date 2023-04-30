#include <stdio.h>
#define COL 3

void multEscalar(int [][COL], int, int);

int main(){

    int j,i,e = 2;
    int mat [2][COL] = {{1,8,-3},{4,-2,5}};
    multEscalar(mat,2,e);
    for ( i = 0;  i <= 1; i++){
        for (j = 0;  j < COL; j++){
            printf("Valor en [%d] [%d] = %d\n",i,j,mat[i][j]);
        }
    }
    return 0;
}

void multEscalar(int m [][COL], int f, int e) {
    int j,i;
    for ( i = 0;  i < f; i++){
        for ( j = 0;  j < COL; j++){
            m[i][j] *= e;
        }
    }
}
