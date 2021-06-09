#include<stdio.h>

//ENTRADAS 
int cantidadcompras;
int precio;
int codigo;


//SALIDAS

int puntos = 5000;


int main (){
    //Darle la bienvenida y un mensaje
    printf("-----------------------\n");
    printf("---------TIENDA--------------\n");
     printf("-----------------------\n");
    //El usuario ingrese la cantidad de compras que quiera hacer 
    printf("Ingrese la cantidad de compras que desea realizar\n");
    scanf("%d", &cantidadcompras);
    // para cada compra pedimos el precio y el codigo
    for ( int i = 0 ; i < cantidadcompras ; i++ ){
        printf("Ingrese el codigo del producto %d:\n", i + 1);
        scanf("%d", &codigo);
        printf("Ingrese el precio del producto %d:\n", i + 1);
        scanf("%d", &precio);
        printf("PRODUCTO %d -> CODIGO: %d - PRECIO: %d\n", i + 1, codigo, precio);



        if(puntos*10 >= precio ){
            printf("puede realizar compra con puntos!\n");

        }else{
            printf("su compra debe ser pagada con efectivo\n");
        }
        
        bool opcion;

        printf("Desea canjear puntos?");
        printf("Escriba 1 si es si, sino escriba 0");
        scanf("%", &opcion);

        while( opcion ){


        }

        if((codigo >= 100) && (codigo < 200)){
            if(precio < 10000){
                printf("Seacomula 1 punto por cada 100 pesos.\n");
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