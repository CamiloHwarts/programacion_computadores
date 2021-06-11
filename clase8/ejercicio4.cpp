#include <stdio.h>


int main(){
    //Metodo de la burbuja
    // ordenamiento de arreglo 
    int arreglo [5];

    for(int i = 0; i < 5 ; i ++){
        printf("ingrese el valor de arreglo [%d]\n", i);
        scanf("%d", & arreglo[i]);
    }
     for(int i = 0; i < 5 ; i ++){
        for(int j = 0 ; j < 5 -1 ; j++){
            if(arreglo [j] > arreglo [j + 1]){
                int aux = arreglo [ j];
                arreglo [j] = arreglo [j +1];
                arreglo [j + 1]= aux;
            }
        }
    }
    for(int i = 0; i < 5 ; i ++){
        printf("arreglo[%d] = %d\n", i, arreglo[i]);
    }



    return 0;
}