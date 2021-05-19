#include <stdio.h>

int num1, num2, num3;

int main(){

    printf("Ingrese tres numeros\n");
    //ingresar primer numero
    printf("Ingrese primer numero\n");
    scanf("%d", &num1);
    //ingresar segundo numero
    printf("Ingrese segundo numero\n");
    scanf("%d", &num2);
    //ingresar tercer numero
    printf("Ingrese tercer numero\n");
    scanf("%d", &num3);
    //Evaluar cual de los tres numeros es el mayor 

    if ( num1 == num2 && num1 == num3){
        printf("Los tres numeros ingresados son IGUALES\n");
    } else if (num1 > num2 && num1 > num3){
        printf("El primer numero ingresadp %d es el mayor\n", num1);

    } else if ( num2 > num3){
        printf("El SEGUNDO NUMERO INGRESADO %d ES MAYOR \n", num2);
    } else {
        printf("El tercer numero ingresado %d es el MAYOR \n", num3);
    }

    return 0;

}