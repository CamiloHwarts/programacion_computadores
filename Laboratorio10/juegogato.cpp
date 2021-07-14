#include <stdio.h>
#include "./juegogatos.h"

//Variables
char tablero[3][3];
bool ganador = false;
int turnos = 0;

int main (){
    llenarTablero(tablero);
    printf("--------------------------------------\n");
    printf("-------------JUEGO DEL GATO-----------\n");
    printf("--------------------------------------\n");
    imprimirTablero(tablero);
    while(!ganador && turnos < 9){
        ingresarJugada(turnos, tablero);
        imprimirTablero(tablero);
        ganador = revisarGanador(tablero);
        turnos++;
    }
    return 0;
}
