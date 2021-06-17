#include <stdio.h>

/*- - -
- - -
- - -*/

//Variables
char tablero[3][3];
int fila;
int columna;
bool ganador = false;
int turnos = 0;


int main (){
    for( int i = 0 ; i < 3 ; i++) {
        for( int j = 0; j < 3; j++ ){
            //valor inicial -
            tablero[i][j] = '-';  

        }
    }
    printf("--------------------------------------\n");
    printf("-------------JUEGO DEL GATO-----------\n");
    printf("--------------------------------------\n");

    printf("             %c  |  %c  |  %c\n", tablero[0][0],  tablero[0][1], tablero[0][2]);
    printf("            ---------------\n");
    printf("             %c  |  %c  |  %c\n", tablero[1][0],  tablero[1][1], tablero[1][2]);
    printf("            ---------------\n");
    printf("             %c  |  %c  |  %c\n", tablero[2][0],  tablero[2][1], tablero[2][2]);
    
    //mientras no aya ganador
    while(!ganador && turnos < 9){
            //Ver turno si es par toca 'X' si no toca 'O'
            if(turnos % 2 == 0){
                printf("Jugador X ->Ingrese su jugada de la forma fila,columna:\n");
                scanf("%d,%d", &fila, &columna);

                //Pedirle jugada hasta que elijan una casilla que no este disponible 
                //Mientras la casilla este ocupada, tengo que pedir nueva jugada 
                while ( tablero[fila - 1 ][columna -1 ] == 'X' || tablero[fila -1 ][columna -1] == 'O' ){
                    printf("Vuelva a intentar con otro casilla, esta ya esta ocupada\n");
                    scanf("%d,%d", &fila, &columna);
                }
                tablero[fila -1][columna -1] = 'X';
            }else{
                printf("Jugador O ->Ingrese su jugada de la forma fila,columna:\n");
                scanf("%d,%d", &fila, &columna);
                while ( tablero[fila - 1 ][columna -1 ] == 'X' || tablero[fila -1 ][columna -1] == 'O' ){
                    printf("Vuelva a intentar con otro casilla, esta ya esta ocupada\n");
                    scanf("%d,%d", &fila, &columna);
                }
                tablero[fila -1][columna -1] = 'O';
            }
        //Tablero gato se modifica cada vez que juegan
        printf("%c  |  %c  |  %c\n", tablero[0][0],  tablero[0][1], tablero[0][2]);
        printf("--------------------\n");
        printf("%c  |  %c  |  %c\n", tablero[1][0],  tablero[1][1], tablero[1][2]);
        printf("--------------------\n");
        printf("%c  |  %c  |  %c\n", tablero[2][0],  tablero[2][1], tablero[2][2]);

        //Para ver las posibles condiciones cuando gana 
        //filas
        if(tablero[0][0]== tablero[0][1] && tablero[0][1] == tablero[0][2] && (tablero[0][0]!= '-')){
            printf("Ganador\n");
            ganador= true;
        }
         if(tablero[1][0]== tablero[1][1] && tablero[1][1] == tablero[1][2] && (tablero[1][0]!= '-')){
            printf("Ganador\n");
            ganador= true;
        }
         if(tablero[2][0]== tablero[2][1] && tablero[2][1] == tablero[2][2] && (tablero[2][0]!= '-')){
            printf("Ganador\n");
            ganador= true;
        }
        //Columnas
        if(tablero[0][0]== tablero[1][0] && tablero[1][0] == tablero[2][0] && (tablero[0][0]!= '-')){
            printf("Ganador\n");
            ganador= true;
        }
         if(tablero[0][1] == tablero[1][1] && tablero[1][1] == tablero[2][1] && (tablero[0][1]!= '-')){
            printf("Ganador\n");
            ganador= true;
        }
         if(tablero[0][2] == tablero[1][2] && tablero[1][2] == tablero[2][2] && (tablero[0][2]!= '-')){
            printf("Ganador\n");
            ganador= true;
        }
        //Diagonales
          if(tablero[0][0] == tablero[1][1] && tablero[1][1] == tablero[2][2] && (tablero[0][0]!= '-')){
            printf("Ganador\n");
            ganador= true;
        }
         if(tablero[0][2] == tablero[1][1] && tablero[1][1] == tablero[2][0] && (tablero[0][2]!= '-')){
            printf("Ganador\n");
            ganador= true;
        }

        turnos ++;
    }
    

    return 0;
}