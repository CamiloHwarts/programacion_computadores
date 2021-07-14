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
 *En este programa se presenta de una forma simple apoyar a los centros de  
 *reparto de comida, permitiendole al cliente seleccionar sus pedidos, ademas de  
 *apoyar en la gestion del envio.
 */
#include <stdio.h>

int hora;
int pedido = 0;
int zona;
int contacto;
int compra;
int algomas;
char nombre_cliente[15];
char apellido_clientes[20];
char direcciones[15];
char metodo_pago[15];

//Prototipos
void menuBienvenida();
void cartaDeSushi();
void menuDeDestinos();
char datosDeEnvio();
char datosDeClientes();


int main() {
  //for que repite la cantidad de pedido , lo temos como predeterminado 
  for(int i=0; i<3 ; i++){
  
  //Bienvenida del programa
  menuBienvenida();

  /*Para ir empezando el programa , pedimos la hora y segun eso podemos proceder ha hacer un pedido*/
  printf("Ingrese hora de pedido\n");
  scanf("%d", &hora);
  if (600<= hora && 1800> hora){
    printf("El local abre de las 1800 en adelante\n");
  } else {
    //Horario en que esta habierto el local de sushi
    if (1800<= hora && hora <=2200){
    
      // Mostramos la carta 
      cartaDeSushi();
      //inicializamos el precio 
      int precio = 0;
      //Bucle para repetir pedido si la persona desea agregar algo mas
      do{
        //Pedidmo que ingrese seleccion de la carta 
        printf("Ingrese el numero de la compra que desea llevar\n");
        scanf("%d", &compra);
          switch(compra){
            case 1: 
                printf("A elegido 10 piezas de sushi\n");
                precio += 3000; 
                break;
            case 2: 
                printf("A elegido 20 piezas de sushi\n");
                precio += 6000;
                break;
            case 3: 
                printf("A elegido 30 piezas de sushi\n");
                precio += 9000; 
                break;
            case 4: 
                printf("A elegido 40 piezas de sushi\n");
                precio += 12000; 
                break;
            case 5: 
                printf("A elegido 50 piezas de sushi\n");
                precio += 15000;
                break;
            default :
              printf("La opcion ingreseda no es validad\n");
          }
          
      printf("El precio es %d\n", precio);
      printf("Desea agregar algo mas, coloque 1 para SI y 2 para NO\n");
      scanf("%d",&algomas);
      
      }while( algomas == 1);
          datosDeClientes();

        do{
          menuDeDestinos();

        scanf("%d", &zona);

        }while( zona < 1 || zona >7);

        if ( zona == 1  ){//AMANECER

          printf("Ingrese dirección de la forma Nombre,Numero\n");  
          getchar();
          scanf("%[^\n]s", &direcciones[0]);
          printf("\n");
          pedido += 1;
          printf("Por esta zona el valor es : $1000\n");
          printf("Su numero de pedido es:\n");
          printf("%d",pedido);
          printf("\n");
          precio = precio + 1000;
          printf("Total a pagar:\n");
          printf("%d", precio);
          printf("\n");
          printf("Ingrese metodo de pago\n");  
          scanf("%s", &metodo_pago[0]);
          printf("\n");
          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else if( zona == 2){//CENTRO

          printf("Ingrese dirección de la forma Nombre,Numero\n");   
          getchar();
          scanf("%[^\n]s",&direcciones[0]);
          printf("\n");
          pedido += 1;
          printf("Por esta zona el valor es : $500\n");
          printf("Su numero de pedido es:\n");
          printf("%d",pedido);
          printf("\n");
          precio = precio + 500;
          printf("Total a pagar:\n");
          printf("%d", precio);
          printf("\n");
          printf("Ingrese metodo de pago\n");  
          scanf("%s", &metodo_pago[0]);
          printf("\n");
          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else if( zona == 3){//BARRIO INGLES

          printf("Ingrese dirección de la forma Nombre,Numero\n");   
          getchar();
          scanf("%[^\n]s",&direcciones[0]);
          printf("\n");
          pedido += 1;
          printf("Por esta zona el valor es : $1000\n");
          printf("Su numero de pedido es:\n");
          printf("%d",pedido);
          printf("\n");
          precio = precio + 1000;
          printf("Total a pagar:\n");
          printf("%d", precio);
          printf("\n");
          printf("Ingrese metodo de pago\n");  
          scanf("%s", &metodo_pago[0]);
          printf("\n");
          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else if( zona == 4){//FUNDO DEL CARMEN

          printf("Ingrese direccion de la forma Nombre,Numero\n");   
          getchar();
          scanf("%[^\n]s",&direcciones[0]);
          printf("\n");
          pedido += 1;
          printf("Por esta zona el valor es : $1300\n");
          printf("Su numero de pedido es:\n");
          printf("%d",pedido);
          printf("\n");
          precio = precio + 1300;
          printf("Total a pagar es:\n");
          printf("%d", precio);
          printf("\n");
          printf("Ingrese metodo de pago\n");  
          scanf("%s", &metodo_pago[0]);
          printf("\n");
          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else if ( zona == 5) {//SANTA ROSA

          printf("Ingrese direccion de la forma Nombre,Numero\n");   
          getchar();
          scanf("%[^\n]s",&direcciones[0]);
          printf("\n");
          pedido += 1;
          printf("Por esta zona el valor es : $1000\n");
          printf("Su numero de pedido es:\n");
          printf("%d",pedido);
          printf("\n");
          precio = precio + 1000;
          printf("Total a pagar es:\n");
          printf("%d", precio);
          printf("\n");
          printf("Ingrese metodo de pago\n");  
          scanf("%s", &metodo_pago[0]);
          printf("\n");
          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else if( zona == 6){///PEDRO DE VALDIVIA

          printf("Ingrese direccion de la forma Nombre,Numero\n");   
          getchar();
          scanf("%[^\n]s",&direcciones[0]);
          printf("\n");
          pedido += 1;
          printf("Por esta zona el valor es : $1000\n");
          printf("Su numero de pedido es:\n");
          printf("%d", pedido);
          printf("\n");
          precio = precio + 1000;
          printf("Total a pagar es:\n");
          printf("%d", precio);
          printf("\n");
          printf("Ingrese metodo de pago\n");  
          scanf("%s", &metodo_pago[0]);
          printf("\n");
          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else {
          printf("Ingrese direccion de la forma Calle,Numero\n");   
          getchar();
          scanf("%[^\n]s",&direcciones[0]);
          printf("\n");
          pedido += 1;
          printf("Por esta zona el valor es : $1000\n");
          printf("Su numero de pedido es:\n");
          printf("%d",pedido);
          printf("\n");
          precio = precio + 1000;
          printf("Total a pagar es:\n");
          printf("%d", precio);
          printf("\n");
          printf("Ingrese metodo de pago\n");  
          scanf("%s", &metodo_pago[0]);
          printf("\n");
          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }
    } else {
      printf("Ya son más de las 2200, horario de cierre de local.\n");
    }
  }
  }
  return 0;
}
void menuBienvenida(){
  printf("\n");
  printf("\n");
  printf("\n");
  printf("-------------------------------------------------------\n");
  printf("---------Bienvenido a nuestro local de Sushi!----------\n");
  printf("-----------------------**SUSHINT**---------------------\n");
  printf("---------Abierto desde las 18:00 hastas las 22:00------\n");
  printf("\n");
  
}
void cartaDeSushi(){
      printf("La carta es\n");
      printf("1. 10 piezas de sushi $3000\n");
      printf("2. 20 piezas de sushi $6000\n");
      printf("3. 30 piezas de sushi $9000\n");
      printf("4. 40 piezas de sushi $12000\n");
      printf("5. 50 piezas de sushi $15000\n");
  
      printf("\n");

}
void menuDeDestinos(){
        printf("Ingrese su zona(valor adicional del reparto)\n");
        printf("1. Amanecer - Recabarren $1000\n");
        printf("2. Centro $500\n");
        printf("3. Barrio Ingles $1000\n");
        printf("4. Fundo del carmen $1300\n");
        printf("5. Santa Rosa - San Antonio $1000\n");
        printf("6. Pedro de Valdivia $1000\n");
        printf("7. Pueblo Nuevo - Alcantara $1000\n");

}
char datosDeEnvio(){
 
}
char datosDeClientes(){
        printf("Necesitaremos los siguientes datos para proceder a repartir\n");
        printf("Ingrese nombre cliente\n");
        scanf("%s", &nombre_cliente[0]);
        printf("\n");
        printf("Ingrese apellido cliente\n");
        scanf("%s", &apellido_clientes[0]);
        printf("Nombre cliente : %s %s\n", nombre_cliente, apellido_clientes);
        printf("\n");
        printf("Ingrese un número de contacto\n");
        scanf("%d", &contacto );
        printf("\n");
}