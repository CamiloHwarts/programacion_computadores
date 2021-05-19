#include <stdio.h>

int destino;
int edad;

int main(){

    //pedir edad
    printf("Ingrese su edad\n");
    scanf("%d", &edad);
    //pedir destino
    printf("Ingrese su destino\n");
    scanf("%d", &destino);

    //revisar tabla 
    if (edad < 15){ 
       if ( destino == 1){
        printf("El valor a pagar por su destino es :\n $2500\n");
       } else if ( destino ==2 ){
        printf("El valor a pagar por su destino es :\n $1200\n");
       } else{
        printf("El valor a pagar por su destino es :\n $2000\n");
       }
    } else if( edad <65){
         if ( destino ==1 ){
        printf("El valor a pagar por su destino es :\n $4200\n");
        } else if ( destino ==2 ){
        printf("El valor a pagar por su destino es :\n $3000\n");
        } else {}
        printf("El valor a pagar por su destino es :\n $3800\n");

    }else {
        if ( destino ==1 ){
        printf("El valor a pagar por su destino es :\n $3000\n");
        } else if ( destino ==2 ){
        printf("El valor a pagar por su destino es :\n $2000\n");
        } else {
        printf("El valor a pagar por su destino es :\n $2500\n");
        }
    }

    return 0;
}