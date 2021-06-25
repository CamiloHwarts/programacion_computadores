#include <stdio.h>

//funsiones tienen dos partes, una declaracion
//Prototipo(definicion), indica al programa que existe una funsion
//declracion,tipo de dato de retorno 
int suma(int a, int b);
int resta(int a, int b);
//El especial no tiene retorno
void mensajeSaludo();
void imprimirMensajes(int a);
//funsion si es par
bool par(int a);

int main (){
    mensajeSaludo();

    int a = 5;
    int b = 2;
    //almacena 
    int c = resta(a ,b);
    int d = suma(7, 3);
    printf("Los resultado son: %d y %d\n", c, d);

    /*imprimirMensajes(1);
    imprimirMensajes(2);
    imprimirMensajes(3);
    */
   printf("%d\n", par(7));

    return 0;
}

int suma(int a, int b){
    int resultado;
    resultado = a + b;
    return resultado;
}
int resta(int a, int b){
    int resultado;
    resultado = a - b;
    return resultado;
}
void mensajeSaludo(){
    printf("Hola bienvenido a la clases!!\n");
}
void imprimirMensajes(int a){
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Hola Mundo!\n");
    printf("Chao %d!\n", a);
}
bool par(int a){
    if( a % 2 == 0){
        //par, respondo con un verdadero
        return true;
    }else {
        //impar
        return false;
    }

}
