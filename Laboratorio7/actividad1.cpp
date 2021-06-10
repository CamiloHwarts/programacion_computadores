//Numeros pares entre el 0 y el 100
#include<stdio.h>


int main () {
    //Mostrar por pantalla todos los numeros parese entre 0 y 100
    printf("Lo numeros pares entre 0 y 100 son:\n");
    for(int i = 2 ; i < 100 ; i = i + 2 ) 
    printf("%d\n", i );

    return 0;
}