#include <stdio.h>
#include "arreglosNumericos.h" 
#include "interfazUsuario.h"

int main(){

    int opcion;
    int numero1, numero2;
    int resultado;
    int numeros[4];

    holaMundo();
    pedirOpcion(&opcion, 1, 4);
    printf("la opcion es: %d\n", opcion);
    pedirNumerosArreglo(numeros, 4);
    printf("La sumatoria es: %d\n", sumatoriaArreglo(numeros, 4));

    return 0;
}