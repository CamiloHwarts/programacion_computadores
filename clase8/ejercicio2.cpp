#include <stdio.h>


int main (){
    //busqueda secuencial
    //buscar numero dentra del arreglo
    int valores[]= {1,89,70,16,72,23,8,10};
    int busqueda;
    printf("ingrese un numero que desea buscar\n");
    scanf("%d", &busqueda);
     for ( int i = 0 ; i < 8 ; i++ ){
         //ejecucuion
         if(valores[i] == busqueda){
             printf("El numero %d esta en valores[%d]\n", busqueda, i);
            break;
         }
         if(i==7){
             printf("el numero no se encuentra en el arreglo\n");
         }
     }

    return 0;
}