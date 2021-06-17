/*Elaborar un programa que muestre todos los numeros primos
entre el 1 y el numero ingresado por el usuario*/

#include <stdio.h>

int numero;
int contador;

int main(){
    //Como hacer que un numero encuentre divisores
    printf("Ingrese un numero\n");
    scanf("%d", &numero);
    for(int x = 1 ; x <= numero ; x++){
        if(x == 1){
            printf("El numero %d es primo\n", x);
        }
        for(int i = 1 ; i <= x; i++){
            //vemos si son divisores y contamos 
            if(x % i == 0){
                contador++;
            }
        }
        if (contador == 2){
            printf("El numero %d es primo\n", x);
            contador = 0;
        }else{
            contador = 0;
        }
    }
    return 0;
}