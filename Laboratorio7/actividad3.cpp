//divisores de un numero
#include <stdio.h>

int num;

int main(){
    //ingresar un numero para luego imprimir por pantalla todos sus divisores
    printf("Ingrese un numero :\n");
    scanf("%d", &num);
    printf("Los divisores son:\n ");

    for (int i = 1 ; i <= num ; i ++){
        if( num % i == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
