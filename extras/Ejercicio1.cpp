/*Elabora un programa que calcule la media o promedio de x numeros,
el programa debe dejar de solicitar numeros cuando se coloca cero */

#include <stdio.h>

int numero = 1;
int contador = 0;
float promedio = 0;
float suma = 0;

int main(){

    while(numero != 0){
        printf("Intrdusca un numero: \n");
        scanf("%d", &numero);
        
        suma += numero;
        if(numero != 0){
            contador++; 
        }
    }
    promedio = suma / contador;
    printf("El promedio es: %f\n", promedio);

    return 0;
}