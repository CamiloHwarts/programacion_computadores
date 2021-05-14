#include <stdio.h>

int numero1;
int numero2;

int main(){
    //Ingresar el primer numero 
    printf("Ingresar el primer numero\n");
    scanf("%d", &numero1);
    //Ingrese el seguno nuemro 
    printf("Ingresar el segundo numero\n");
    scanf("%d", &numero2);
    //compararlos
    if (numero1 > numero2){
    //EL primer nombre es el mayor
        printf("El nuemro mayor es : %d", numero1);
    } else{
    //el segundo numero es el menor
        printf("El nuemro mayor es : %d", numero2);
    }
    return 0;

}