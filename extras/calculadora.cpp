//Calculadora con switch
#include <stdio.h>

float numero1 , numero2;
int opcion;


int main (){
    printf("Ingrese el primer numero:\n");
    scanf("%f", &numero1);
    printf("Ingrese el segundo numero:\n");
    scanf("%f", &numero2);

    printf("Menu de opciones\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicacion\n");
    printf("4. Dividicion\n");
    printf("5. Salir del programa\n");
    printf("Ingrese un opcion\n");
    scanf("%d",&opcion);

    switch ( opcion ){

        case 1:
            printf("Resultado = %f\n", numero1 + numero2);
            break;
        case 2:
            printf("Resultado = %f\n", numero1 - numero2);
            break;
        case 3:
            printf("Resultado = %f\n", numero1 * numero2);
            break;
        case 4:
            printf("Resultado = %f\n", numero1 / numero2);
            break;
        default:
            break;
    }


    return 0;
}