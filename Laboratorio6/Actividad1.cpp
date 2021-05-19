#include <stdio.h>

int numero;


int main(){
    //ingresar el primer numero
    printf("Ingrese un numero entero\n");
    scanf("%d", &numero);
    /*Creamos condicion donde evaluamos 
    si el numero ingresado es par o impar*/
    if (numero %2 == 0 ){
    printf("El numero ingresado %d es PAR\n", numero);
    }else {
    printf("El numero ingresado %d es IMPAR\n", numero);
    }
    return 0;
}