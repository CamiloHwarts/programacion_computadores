#include <stdio.h>
int tablero[10][10];
int coordenadaY;
int coordenadaX;
char direccion[2];
void batallaNaval(int tablero[10][10], int coordenadaY, int coordenadaX, char direccion[2]);

int main(){
    batallaNaval(tablero, coordenadaY, coordenadaX, direccion);
    return 0;
}
void batallaNaval(int* tablero[10][10], int coordenadaY, int coordenadaX, int direccion[2]){
    printf("Coordenas tablero\n");
    printf("[0,0] [0,1] [0,2] [0,3] [0,4] [0,5] [0,6] [0,7] [0,8] [0,9]\n");
	printf("[1,0] [1,1] [1,2] [1,3] [1,4] [1,5] [1,6] [1,7] [1,8] [1,9]\n");
	printf("[2,0] [2,1] [2,2] [2,3] [2,4] [2,5] [2,6] [2,7] [2,8] [2,9]\n");
    printf("[3,0] [3,1] [3,2] [3,3] [3,4] [3,5] [3,6] [3,7] [3,8] [3,9]\n");
	printf("[4,0] [4,1] [4,2] [4,3] [4,4] [4,5] [4,6] [4,7] [4,8] [4,9]\n");
	printf("[5,0] [5,1] [5,2] [5,3] [5,4] [5,5] [5,6] [5,7] [5,8] [5,9]\n");
    printf("[6,0] [6,1] [6,2] [6,3] [6,4] [6,5] [6,6] [6,7] [6,8] [6,9]\n");
	printf("[7,0] [7,1] [7,2] [7,3] [7,4] [7,5] [7,6] [7,7] [7,8] [7,9]\n");
	printf("[8,0] [8,1] [8,2] [8,3] [8,4] [8,5] [8,6] [8,7] [8,8] [8,9]\n");
    printf("[9,0] [9,1] [9,2] [9,3] [9,4] [9,5] [9,6] [9,7] [9,8] [9,9]\n");

    printf("Ingrese dirccion en que quiera que vallan los barcos\n");
    printf("\nDirecciones: Norte (N), Este (E), Sur (S), Oeste (O)\n");
    scanf("%s", &direccion);
    if(direccion == 'N'){
	    printf("\nIngrese cuatro coordenadas para el primer barco en orden ya sea de filas o columnas\n");
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] = '|';
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] = '|';
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] = '|';
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] == '|';
		
    }
	if (direccion == 'E'){	
		printf("\nIngrese cuatro coordenadas para el primer barco en orden ya sea de filas o columnas\n");
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] == '-';
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] == '-';
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] == '-';
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] == '-';	
	}
    if (direccion == 'S'){
		printf("\nIngrese cuatro coordenadas para el primer barco en orden ya sea de filas o columnas\n");
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] == '|';
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] == '|';
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] == '|';
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] == '|';
	}
	if (direccion == 'O'){
		printf("\nIngrese cuatro coordenadas para el primer barco en orden ya sea de filas o columnas\n");
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] = '-';
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] = '-';
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] = '-';
        printf("\nIngrese 1ra coordenada de la forma: Fila , Columna: \n");
	    scanf("%i , %i", &coordenadaY, &coordenadaX);
        tablero[coordenadaX][coordenadaY] = '-';
	} 
}