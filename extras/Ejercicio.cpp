/*Elabora un programa que al ingresar un numero entre el 0 y el 20 s(sin incluirlos) diga correcto, 
en caso contrario pedir nuevamente el numero hasta que se cumpla la condicion anterior */

#include <stdio.h>

int numero;

int main(){

    do{
        printf("Ingrese un numero entre 0 y 20 sin incluirlos: \n");
        scanf("%d", &numero);

    }while( true != (numero > 0 && numero < 20));

    printf("Numero correcto!!!\n");
    

    return 0;
}