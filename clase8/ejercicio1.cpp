#include <stdio.h>



int main (){
    //arreglo que gurde 100 elementos 
    int numeros[101];
    //
    //como puedo llenar los elementos?
    //tengo que dejar un numero a 100 casillas , es una estructura iterativa
    for ( int i = 0 ; i < 101 ; i++ ){
        numeros[i]= i + 1;
        printf("Numeros[%d] = %d\n",i ,numeros[i]);
    }
    return 0;
}