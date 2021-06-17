#include <stdio.h>

//ENTRADAS 
int destino;
int edad;
int viajes;
int pago = 0;
//SALIDAS

int cant_pasajeros_destino;
int cant_pasajeros_grupoetario;
int total_ingresos = 0;


//sin x viajes

int main(){

    //pedir edad
    printf("Ingrese su edad\n");
    scanf("%d", &edad);
    //pedir destino
    printf("Ingrese su destino\n");
    scanf("%d", &destino);
    printf("Su edad es : %d y su destino es: %d\n", edad, destino);
    
    //Crearemos bucle por destino
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
    
    /*while( destino1 < 30 ){
        destino1 += 1;
    }

         printf("El bus se llenado, no quedan mas pasajes\n");
         */
    //Revisar tabla por destinos
    if ( destino == 1){

        if ( edad < 15){
            printf("Debe pagar:\n $2500\n ");
        } else if (15 <= edad && edad < 65){
            printf("Debe pagar:\n $4200\n");
        }else{
            printf("Debe pagar:\n $3000\n");
        }
    } else if ( destino == 2) {

         if ( edad < 15){
            printf("Debe pagar:\n $1200\n ");
        } else if (15 <= edad && edad < 65){
            printf("Debe pagar:\n $3000\n");
        }else{
            printf("Debe pagar:\n $2000\n");
        }
    }else {

         if ( edad < 15){
            printf("Debe pagar:\n $2000\n ");
        } else if (15 <= edad && edad < 65){
            printf("Debe pagar:\n $3800\n");
        }else{
            printf("Debe pagar:\n $2500\n");
        }
    }


    return 0;
}