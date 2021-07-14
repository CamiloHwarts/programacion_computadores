#include <stdio.h>

int sumatoriaArreglo(int arreglo[],int elementos);
void pedirNumerosArreglo(int arreglo[], int elementos);


int main(){


    int numeros[4];
    pedirNumerosArreglo(numeros, 4);
    printf("La sumatoria es: %d\n", sumatoriaArreglo(numeros, 4));

    

    return 0;
}
