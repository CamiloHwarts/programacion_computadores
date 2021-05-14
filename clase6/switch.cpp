#include <stdio.h>

int opcion;

int main () {

    printf("***********************\n");
    printf("**********MENU*********\n");
    printf("***********************\n");
    printf("1.- SUMAR\n");
    printf("2.- RESTA\n");
    printf("3.- MULTIPLICACION\n");
    printf("4.- DIVICION\n");
    printf("Ingrese una opcion\n");
    scanf("%d", &opcion);


    switch (opcion)
    {
    case 1: printf("El usuario quiere sumar\n");
            break;
    case 2: printf("El usuario quiere restar\n");
            break;
    case 3: printf("El usuario quiere multiplicar\n");
            break;
    case 4: printf("El usuario quiere dividir\n");
            break;        
    default: printf("El usuario ingreso una opcion que no es valida\n");

    }


    return 0;
}