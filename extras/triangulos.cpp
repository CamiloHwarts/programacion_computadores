//Poner tres lado y ver que triangulo es 
#include <stdio.h>

//lados de un triangulo como entrada
int lado1, lado2, lado3;
int ladomayor;
int suma;

int main(){
    printf("Ingrese los lados de un triangulo de la forma A , B , C \n");
    scanf("%d,%d,%d", &lado1, &lado2, &lado3);

    //Determine que lado es el mayor
    if(lado1 > ladomayor){
        ladomayor = lado1;
    }
    if(lado2 > ladomayor){
        ladomayor = lado2;
    }
    if(lado3 > ladomayor){
        ladomayor = lado3;
    }
    printf("El lado mayor del triangulo es = %d\n", ladomayor);
    
    //Sumar dos lados mas pequeños 
    suma = lado1 + lado2 + lado3 - ladomayor;

    //Ver si es un triangulo 
    if(ladomayor < suma){
        //Es triangulo
        //Ver que triangulo es 
        if(lado1 == lado2 && lado2 == lado3){
            printf("Es un triangulo Equilatero\n");
        } else if( lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
            printf("Es un triangulo Isoseles\n");
        } else{
            printf("Es un triangulo Escaleno\n");
        }
    } else {
        printf("No es un ttriangulo\n");
    }



    return 0;
}