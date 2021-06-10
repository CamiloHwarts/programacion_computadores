#include<stdio.h>

//ENTRADAS 
int cantidadcompras;
int precio;
int codigo;
int puntos;
int respuesta;
int puntosacom;


//SALIDAS

int main (){
    //Darle la bienvenida y un mensaje
    printf("-----------------------\n");
    printf("---------TIENDA--------------\n");
     printf("-----------------------\n");
    //El usuario ingrese la cantidad de compras que quiera hacer 
    printf("Ingrese la cantidad de compras que desea realizar\n");
    scanf("%d", &cantidadcompras);
    //Ingreso los puntos para usar mas adelate a ver si pued ocupar
    printf("Ingrese los puntos acomulados hasta el momento:\n");
    scanf("%d", &puntos);

    // para cada compra pedimos el precio y el codigo
    for ( int i = 0 ; i < cantidadcompras ; i++ ){
        printf("Ingrese el codigo del producto %d:\n", i + 1);
        scanf("%d", &codigo);
        printf("Ingrese el precio del producto %d:\n", i + 1);
        scanf("%d", &precio);
        printf("PRODUCTO %d -> CODIGO: %d - PRECIO: %d\n", i + 1, codigo, precio);
        
        if(puntos*10 >= precio ){
            printf("Puede realizar compra con puntos!\n");
            printf("Dedea ocupar sus puntos en esta compra?(1 = SI y 2 = NO)\n");
            scanf("%d", &respuesta);
            if (respuesta == 1){
                puntos = puntos*10 - precio;
                puntos /=10;
                printf("Su total de puntos ahora es:\n%d\n", puntos);
            }else {
                printf("Sus puntos se seguiran acomulando");
                puntos += puntosacom;
                printf("Su total de puntos es:\n%d\n", puntos);
            }
            
        }else{
            printf("Su compra debe ser pagada con efectivo\n");
            puntos += puntosacom;
            printf("Su total de puntos es:\n%d\n", puntos);
        }
        
         if((codigo >= 100) && (codigo < 200)){
            if(precio < 10000){
                printf("Se acomula 1 punto por cada 100 pesos.\n");
                puntos += (precio/100);
            }else {
                printf("se acomula 1 punto por cada 50 pesos.\n");
                puntos += (precio/50);
            }
        }
        if((codigo >= 200) && (codigo < 300)){
            if(precio < 10000){
                printf("Se acomula 1 punto por cada 50 pesos.\n");
                puntos += (precio/50);
            }else {
                printf("Se acomula 1 punto por cada 30 pesos.\n");
                puntos += (precio/30);
            }
        }

        printf("Puntos totales: %d\n", puntos);    
        
    }



    return 0;

}