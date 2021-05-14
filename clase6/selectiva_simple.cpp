#include <stdio.h>

int numero1, numero2, suma;

int main (){
    //ingresar primer numero
    printf("Ingrese primer numero\n");
    scanf("%d", &numero1);
    //ingresar segundo numero 
    printf("Ingrese segundo numero\n");
    scanf("%d", &numero2);
    //preguntar si el segundo numero es 5
    if ( numero2 == 5){
        //si el segundo numero es 5 sumamo snumeros 
        suma = numero1 + numero2;
        printf("La suma es : %i\n", suma);
    }
    //si el segundo numero no es 5 , no hacemos nada

    return 0;
}