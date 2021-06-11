#include <stdio.h>

int main(){
    //matrices
    int matriz[4][2] = {{1,2},{3,4},{5,10},{70,15}};
    //filas
    for(int i = 0; i < 4 ; i++){
        //columnas
        for(int j = 0; j < 2 ; j++){
            printf("%d " , matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}