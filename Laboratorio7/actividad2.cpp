//Multiplicacion
#include<stdio.h>

//Entradas
int num1;
int num2;
//Salidas
int resultado = 0;

int main (){

    printf("Ingrese dos numero de la forma (X , Y) para posteriormente multiplicarlos:\n");
    printf("Ingrese el prinmer numero:\n");
    scanf("%d,%d", &num1, &num2);
    
    for (int i=0 ; i < num2 ; i++){
        resultado += num1;
    }
    printf("El resultado de %d * %d es : %d\n",num1,num2,resultado);

    return 0;
}