//está encargado de la búsqueda de tesoros submarinos
#include <stdio.h>

int matriz[10][10] = 
{{2,9,0,0,10,9,6,10,5,4},
{9,6,5,0,0,9,6,3,2,8},
{3,3,8,10,6,9,5,4,3,9},
{2,6,3,6,4,3,6,2,8,3},
{6,6,9,10,3,4,6,2,9,9},
{4,10,4,4,9,0,9,10,8,8},
{2,2,0,3,5,4,4,6,6,5},
{8,4,1,3,9,5,6,6,7,7},
{8,1,4,9,5,7,7,3,4,4},
{4,8,5,4,2,3,3,2,3,6}};
//Cantidad de misiones 
int misiones;
//Coordenas
int fila;
int columna;
int elementos;

//Direcciones
int direccion;
int norte , este, sur, oeste;



int main(){

    //Matriz con los 100 elementos 10x10
    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0 ; j < 10 ; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    /*Considerar la cantidad de misiones no 
    puede ser mayor a 10 y menor a 2*/
    printf("Elija la cantidad de misoones que sea realizar\n");
    printf("Tener en cuenta que no pueden ser menos de 2 ni mas de 10\n");
    scanf("%d", &misiones);

    while(misiones <2 && misiones > 10){
    printf("Error Ingrese número de misiones a enviar:(minimo 2 y maximo 10) \n");
	scanf("%d",&misiones);
	}

    for( int i = 0 ; i < misiones ; i++){
        printf("%d - %d - %d - %d - %d - %d - %d - %d - %d - %d", 
        matriz[0][0], matriz[0][1], matriz[0][2], matriz[0][3], matriz[0][4], matriz[0][5], matriz[0][6], matriz[0][7],matriz[0][8],matriz[0][9]);
        printf("\n");
        printf("%d - %d - %d - %d - %d - %d - %d - %d - %d - %d", 
        matriz[1][0], matriz[1][1], matriz[1][2], matriz[1][3], matriz[1][4], matriz[1][5], matriz[1][6], matriz[1][7],matriz[1][8],matriz[1][9]);
        printf("\n");
        printf("%d - %d - %d - %d - %d - %d - %d - %d - %d - %d", 
        matriz[2][0], matriz[2][1], matriz[2][2], matriz[2][3], matriz[2][4], matriz[2][5], matriz[2][6], matriz[2][7],matriz[2][8],matriz[2][9]);
        printf("\n");
        printf("%d - %d - %d - %d - %d - %d - %d - %d - %d - %d", 
        matriz[3][0], matriz[3][1], matriz[3][2], matriz[3][3], matriz[3][4], matriz[3][5], matriz[3][6], matriz[3][7],matriz[3][8],matriz[3][9]);
        printf("\n");
        printf("%d - %d - %d - %d - %d - %d - %d - %d - %d - %d", 
        matriz[4][0], matriz[4][1], matriz[4][2], matriz[4][3], matriz[4][4], matriz[4][5], matriz[4][6], matriz[4][7],matriz[4][8],matriz[4][9]);
        printf("\n");
        printf("%d - %d - %d - %d - %d - %d - %d - %d - %d - %d", 
        matriz[5][0], matriz[5][1], matriz[5][2], matriz[5][3], matriz[5][4], matriz[5][5], matriz[5][6], matriz[5][7],matriz[5][8],matriz[5][9]);
        printf("\n");
        printf("%d - %d - %d - %d - %d - %d - %d - %d - %d - %d", 
        matriz[6][0], matriz[6][1], matriz[6][2], matriz[6][3], matriz[6][4], matriz[6][5], matriz[6][6], matriz[6][7],matriz[6][8],matriz[6][9]);
        printf("\n");
        printf("%d - %d - %d - %d - %d - %d - %d - %d - %d - %d", 
        matriz[7][0], matriz[7][1], matriz[7][2], matriz[7][3], matriz[7][4], matriz[7][5], matriz[7][6], matriz[7][7],matriz[7][8],matriz[7][9]);
        printf("\n");
        printf("%d - %d - %d - %d - %d - %d - %d - %d - %d - %d", 
        matriz[8][0], matriz[8][1], matriz[8][2], matriz[8][3], matriz[8][4], matriz[8][5], matriz[8][6], matriz[8][7],matriz[8][8],matriz[8][9]);
        printf("\n");
        printf("%d - %d - %d - %d - %d - %d - %d - %d - %d - %d", 
        matriz[9][0], matriz[9][1], matriz[9][2], matriz[9][3], matriz[9][4], matriz[9][5], matriz[9][6], matriz[9][7],matriz[9][8],matriz[9][9]);
        printf("\n");


        printf("Elija las coordenas donde quiere mandar al robot\n");
        printf("Tiene que ser de la forma: fila,columna \n");
        scanf("%d,%d", &fila , &columna);
        printf("En estas coordenas hay:\n");
        printf("%d Elementos\n", matriz[fila - 1][ columna - 1]);

        elementos += matriz[fila - 1][ columna - 1];
        printf("Elementos hasta el momento son: %d\n", elementos);

        printf("Que direccion quieres tomas N = 1, E = 2, S = 3, O = 4");
        scanf("%d", &direccion);
        switch(direccion){
            case 1:
                    printf("Escogio direccion Norte\n");
                    direccion = matriz[fila -1][columna - 2] ;
                    elementos += direccion;
                    printf("Elementos acomulados son: %d\n", elementos);
                    break;

            case 2:
                    printf("Escogio direccion Este\n");
                    direccion = matriz[fila][columna - 1] ;
                    elementos += direccion;
                    printf("Elementos acomulados son: %d\n", elementos);
                    break;
            case 3:
                    printf("Escogio direccion Sur\n");
                    direccion = matriz[fila -1][columna] ;
                    elementos += direccion;
                    printf("Elementos acomulados son: %d\n", elementos);
                    break;
            default :
                    printf("Escogio direccion Oeste\n");
                    direccion = matriz[fila - 2][columna - 1] ;
                    elementos += direccion;
                    printf("Elementos acomulados son: %d\n", elementos);
                    break;
        }
        
    }

    return 0;
}