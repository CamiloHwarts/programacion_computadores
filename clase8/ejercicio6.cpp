#include <stdio.h>

int main (){
    //Cadenas de caracteres 
    char nombre [15];
    char apellido [20];

    char nombre_clientes [50][15];//para 50 clientes, com 15 caracteres
    char apellidos_clientes [50][20];

    int cantidad_clientes = 0;

    printf("Ingrese su nombre\n");
    //strink
    //cadenas no es necesario que tlleben &
    scanf("%s ", nombre_clientes [0]);
    printf("Ingrese su apellido\n");
    scanf("%s ", apellidos_clientes[0]);
    cantidad_clientes ++;


    printf("Bienvenido %s %s !\n", nombre_clientes[0] , apellidos_clientes[0]);

    return 0;
}