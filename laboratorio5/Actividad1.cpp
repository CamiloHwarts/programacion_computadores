#include <stdio.h>

int numero1;
int numero2;
int suma;


int main (){
    printf("Ingrese primer numero\n");
    scanf("%i", &numero1);
    printf("Ingrese segundo numero \n");
    scanf("%i", &numero2);
    suma = numero1 + numero2;
    printf("El resultado de la suma entre %i y %i es: %i\n",numero1, numero2, suma);
    
    return 0;

}
