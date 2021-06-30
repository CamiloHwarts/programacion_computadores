#include <stdio.h>

//Prototipos
int ejemplo(int a, int b);
void imprimirMenu();
void imprimirFunsiones();
int suma(int numero1, int nuemro2);
int resta(int numero1, int nuemro2);
int multiplicacion(int numero1, int nuemro2);
//sobrecarga de funsiones
int division(int numero1, int nuemro2);
float division(float numero1, float nuemro2);
int calculadora(int operacion, int numero1, int numero2);


//Variables 
int opcion, numero1, numero2, resultado;

int main(){
    int ejemplo = 4;//Variable local ala funsion main
    //Calculadora 

    //Menu
    imprimirMenu();
    
    //Opciones
    imprimirFunsiones();
    printf("Seleccione la operacion que desea realizar\n");
    scanf("%d", &opcion);

    if( opcion == 4){
    //Pedir numeros
    printf("Ingrese primer numero\n");
    scanf("%d", &numero1);
    do{
    printf("Ingrese segundo numero\n");
    scanf("%d", &numero2);
    }while( numero2 == 0);
    }else{
        printf("Ingrese primer numero\n");
        scanf("%d", &numero1);   
        printf("Ingrese segundo numero\n");
        scanf("%d", &numero2); 
    }

    //Seleccion de operacion 
    printf("El resultado es: %d\n",calculadora(opcion, numero1, numero2));

    return 0;
}
//implementaciones
int ejemplo(int a, int b){
    int res = a + b;
    printf("numero1 = %d\n", numero1);
    return res;
}

int suma(int numero1, int nuemro2){
    int resultado = numero1 + numero2;
    return resultado;
}
int resta(int numero1, int nuemro2){
    int resultado = numero1 - numero2;
    return resultado;
}
int multiplicacion(int numero1, int nuemro2){
    int resultado = numero1 * numero2;
    return resultado;
}
float division(float numero1, float nuemro2){
    float resultado = numero1 / numero2;
    return resultado;
}
int division(int numero1, int nuemro2){
    int resultado = numero1 / numero2;
    return resultado;
}
void imprimirMenu(){
    printf("------------------------\n");
    printf("------------------------\n");
    printf("-------CALCULADORA -----\n");
    printf("------------------------\n");
    printf("------------------------\n");
}
void imprimirFunsiones(){
    printf("1.- Suma\n");
    printf("2.- Resta\n");
    printf("3.- Multiplicacion\n");
    printf("4.- Divicion\n");

}
int calculadora(int operacion, int numero1, int numero2){
    switch(operacion){
        case 1: return suma(numero1, numero2);
                
        case 2: return resta(numero1, numero2);
            
        case 3: return multiplicacion(numero1, numero2);
        
        case 4: return division(numero1, numero2);
       
        default: return -1;
    }
}