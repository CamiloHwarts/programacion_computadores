#include <stdio.h>

//ENTRADAS 
int destino;
int edad;
int viajes = 5;
//SALIDAS
//catidad de pasajeros por destino 
int destino1 = 0;
int destino2 = 0;
int destino3 = 0;
//Cantidad de pasajeros por grupo etario 
int men15 = 0;
int men65 = 0;
int may65 = 0;
//Total ingresos por ventas de pasajes 
int ganancias = 0;


int main(){

    //pedir edad
    printf("Ingrese su edad\n");
    scanf("%d", &edad);
    //pedir destino
    printf("Ingrese su destino\n");
    scanf("%d", &destino);
    printf("Su edad es : %d y su destino es: %d\n", edad, destino);
    
    //Crearemos bucle por destino
    /*while( destino1 < 30 ){
        destino1 += 1;
    }

         printf("El bus se llenado, no quedan mas pasajes\n");
         */

    for(int i = 0 ; i < viajes ; i++){
    //Revisar tabla por destinos
        if ( destino == 1){
            destino1 ++;

            if ( edad < 15){
                printf("Debe pagar:\n $2500\n ");
                ganancias += 2500;
                men15 ++;
            } else if (15 <= edad && edad < 65){
                printf("Debe pagar:\n $4200\n");
                ganancias += 4200;
                men65 ++;
            }else{
                printf("Debe pagar:\n $3000\n");
                may65 ++;
                ganancias += 3000;
            }
        
        } else if ( destino == 2) {
            destino2++;

            if ( edad < 15){
                printf("Debe pagar:\n $1200\n ");
                men15 ++;
                ganancias += 1200;
            } else if (15 <= edad && edad < 65){
                printf("Debe pagar:\n $3000\n");
                men65 ++;
                ganancias += 3000;
            }else{
                printf("Debe pagar:\n $2000\n");
                may65 ++;
                ganancias += 2000;
            }
        }else {
            destino3++;

            if ( edad < 15){
                printf("Debe pagar:\n $2000\n ");
                men15 ++;
                ganancias += 2000;
            } else if (15 <= edad && edad < 65){
                printf("Debe pagar:\n $3800\n");
                men65 ++;
                ganancias += 3800;
            }else{
                printf("Debe pagar:\n $2500\n");
                may65 ++;
                ganancias += 2500;
            }
        }    
    }
    printf("El total de pasajeros menores de 15 son: %d\n", men15);
    printf("El total de pasajeros entre 15 y 65 son: %d\n", men65);
    printf("El total de pasajeros mayores de 65 son: %d\n", may65);
    printf("La cantidad de pasajeros destino 1 son: %d\n", destino1);
    printf("La cantidad de pasajeros destino 2 son: %d\n", destino2);
    printf("La cantidad de pasajeros destino 3 son: %d\n", destino3);
    printf("Total de ganancias es: $%d\n", ganancias);

    return 0;
}