/*  Universidad de La Frontera
 *  Departamento de Ingenieria Eléctrica
 *  
 *  ICC - 202 PROGRAMCION DE COMPUTADORES
 * 
 *  Tarea 2
 *  Autores: Alex Olivera, (a.olivera02@ufromail.cl)
 *           Camilo Hwarts. (c.hwarts01@ufromail.cl)
 *           Gabriel Garzon. (g.garzon01@ufromail.cl)
 *           Cristian Duran. (C.duran07@ufromail.cl)
 *  Fecha: Domingo 20 junio 2021
 *
 *En este programa se presenta de una forma simple apoyar a los centros de  *reparto de comida, permitiendole al cliente seleccionar sus pedidos, ademas de  *apoyar en la gestion del envio.
 *
 */
#include <stdio.h>
#include "./librerias.h"

int hora;
int pedido = 0;
int zona;
int compra;
int algomas;
char contacto[15];
char nombre_cliente[15];
char apellido_cliente[20];
char direcciones[20];
int metodo_pago;
int localDeli;

int main() {
  //for que repite la cantidad de pedido , lo temos como predeterminado 
  for(int i=0; i<3 ; i++){
  
  bienvenidaSushi();
  
  ingresoHora(&hora);

  if ((600 <= hora) && (1800 > hora)){
    printf("El local abre de las 1800 en adelante\n");

  } else {
    //Horario en que esta habierto el local de sushi
    if ((1800 <= hora) && (hora <= 2200)){
      // Mostramos la carta 
      cartaSushi();
      //inicializamos el precio 
      int precio = 0;

      precio = selecionCarta(compra, precio, algomas);
      printf("%d\n", precio);

      datosDelCliente(nombre_cliente, apellido_cliente, contacto);
      
      localDeli = retiro();

      if(localDeli == 1){
      printf("Datos cliente son: %s %s %s\n", nombre_cliente, apellido_cliente, contacto);
      printf("Se le notificará cuando su pedido esté pronto a retirar\n");
      
      pedido = nPedido(pedido);
      
      printf("Total a pagar:\n");
      printf("%d\n", precio);
      }else{
        direccion(direcciones);
        
      do{
        menuZonas();
        scanf("%d", &zona);
      }while( zona < 1 || zona >7);

      if ( zona == 1  ){//AMANECER
          printf("Por esta zona el valor es : $1000\n");

          pedido = nPedido(pedido);

          precio = precio + 1000;
          printf("Total a pagar:\n");
          printf("%d", precio);
          printf("\n");

          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");

        }else if( zona == 2){//CENTRO
          printf("Por esta zona el valor es : $500\n");

          
          pedido = nPedido(pedido);
        
          precio = precio + 500;
          printf("Total a pagar:\n");
          printf("%d", precio);
          printf("\n");

          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else if( zona == 3){//BARRIO INGLES
          printf("Por esta zona el valor es : $1000\n");
          
          pedido = nPedido(pedido);

          precio = precio + 1000;
          printf("Total a pagar:\n");
          printf("%d", precio);
          printf("\n");

          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else if( zona == 4){//FUNDO DEL CARMEN
          printf("Por esta zona el valor es : $1300\n");
          
          pedido = nPedido(pedido);

          precio = precio + 1300;
          printf("Total a pagar es:\n");
          printf("%d", precio);
          printf("\n");
          
          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else if ( zona == 5) {//SANTA ROSA
          printf("Por esta zona el valor es : $1000\n");
          
          pedido = nPedido(pedido);

          precio = precio + 1000;
          printf("Total a pagar es:\n");
          printf("%d", precio);
          printf("\n");
          
          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else if( zona == 6){///PEDRO DE VALDIVIA
          printf("Por esta zona el valor es : $1000\n");
          
          pedido = nPedido(pedido);

          precio = precio + 1000;
          printf("Total a pagar es:\n");
          printf("%d", precio);
          printf("\n");
          
          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else {
          printf("Por esta zona el valor es : $1000\n");
          
          pedido = nPedido(pedido);

          precio = precio + 1000;
          printf("Total a pagar es:\n");
          printf("%d", precio);
          printf("\n");
          
          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }
      }
    } else {
      printf("Ya son más de las 2200, horario de cierre de local!\n");
      printf("Si desea comprar puede consultar mañana entre 1800 a 2200 hrs\n");
    }
  }
  }
  return 0;
}