#include <stdio.h>

int main (){
    //Cadenas de caracteres 
    char nombre [15];
    char apellido [20];

    char nombre_clientes [50][15];//para 50 clientes, com 15 caracteres
    char apellidos_clientes [50][20];

    int cantidad_clientes = 0;

    printf("Ingrese su nombre\n");
    //strink %s
    //cadenas no es necesario que lleben &
    scanf("%s", nombre_clientes [cantidad_clientes]);
    printf("Ingrese su apellido\n");
    scanf("%s", apellidos_clientes[cantidad_clientes]);
    cantidad_clientes ++;
    printf("Bienvenido %s %s !\n", nombre_clientes[0] , apellidos_clientes[0]);

    return 0;
}