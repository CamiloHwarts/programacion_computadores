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

int hora;
int pedido = 0;
int zona;
int compra;
int algomas;
char contacto[15];
char nombre_cliente[15];
char apellido_cliente[20];
char direccion[20];
int metodo_pago;

//Prototipos 
void bienvenidaSushi();
void ingresoHora(int* hora);
void cartaSushi();
int selecionCarta(int compra, int precio, int algomas);
void datosDelCliente(char nombre_cliente[],char apellido_cliente[], char contacto[], char direccion[]);
void menuDirecciones();
void datosDeEnvio(char direccion[20]);
void datosPago(int metodo_pago);



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

      selecionCarta(compra, precio, algomas);
      printf("%d\n", precio);

      datosDelCliente(nombre_cliente, apellido_cliente, contacto, direccion);
      
      do{
        menuDirecciones();
        scanf("%d", &zona);
      }while( zona < 1 || zona >7);

      if ( zona == 1  ){//AMANECER
          printf("Por esta zona el valor es : $1000\n");
          printf("Su numero de pedido es:\n");
          pedido += 1;
          printf("%d",pedido);
          printf("\n");
          precio = precio + 1000;
          printf("Total a pagar:\n");
          printf("%d", precio);
          printf("\n");

          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");

        }else if( zona == 2){//CENTRO
          printf("Por esta zona el valor es : $500\n");
          printf("Su numero de pedido es:\n");
          pedido += 1;
          printf("%d",pedido);
          printf("\n");
          precio = precio + 500;
          printf("Total a pagar:\n");
          printf("%d", precio);
          printf("\n");

          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else if( zona == 3){//BARRIO INGLES
          printf("Por esta zona el valor es : $1000\n");
          printf("Su numero de pedido es:\n");
          pedido += 1;
          printf("%d",pedido);
          printf("\n");
          precio = precio + 1000;
          printf("Total a pagar:\n");
          printf("%d", precio);
          printf("\n");

          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else if( zona == 4){//FUNDO DEL CARMEN
          printf("Por esta zona el valor es : $1300\n");
          printf("Su numero de pedido es:\n");
          pedido += 1;
          printf("%d",pedido);
          printf("\n");
          precio = precio + 1300;
          printf("Total a pagar es:\n");
          printf("%d", precio);
          printf("\n");
          
          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else if ( zona == 5) {//SANTA ROSA
          printf("Por esta zona el valor es : $1000\n");
          printf("Su numero de pedido es:\n");
          pedido += 1;
          printf("%d",pedido);
          printf("\n");
          precio = precio + 1000;
          printf("Total a pagar es:\n");
          printf("%d", precio);
          printf("\n");
          
          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else if( zona == 6){///PEDRO DE VALDIVIA
          printf("Por esta zona el valor es : $1000\n");
          printf("Su numero de pedido es:\n");
          pedido += 1;
          printf("%d", pedido);
          printf("\n");
          precio = precio + 1000;
          printf("Total a pagar es:\n");
          printf("%d", precio);
          printf("\n");
          
          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }else {
          printf("Por esta zona el valor es : $1000\n");
          printf("Su numero de pedido es:\n");
          pedido += 1;
          printf("%d",pedido);
          printf("\n");
          precio = precio + 1000;
          printf("Total a pagar es:\n");
          printf("%d", precio);
          printf("\n");
          
          datosPago(metodo_pago);

          printf("Muchas gracias por su compra, su pedido esta en camino\n");
        }
    } else {
      printf("Ya son más de las 2200, horario de cierre de local!\n");
      printf("Si desea comprar puede consultar mañana entre 1800 a 2200 hrs\n");
    }
  }
  }
  return 0;
}
//Implementaciones 

void bienvenidaSushi(){
  printf("\n");
  printf("\n");
  printf("\n");
  printf("-------------------------------------------------------\n");
  printf("---------Bienvenido a nuestro local de Sushi!----------\n");
  printf("-----------------------**SUSHINT**---------------------\n");
  printf("---------Abierto desde las 18:00 hastas las 22:00------\n");
  printf("\n");
}

void ingresoHora(int* hora){
  printf("Ingrese hora e pedido\n");
  scanf("%d", hora);
}

void cartaSushi(){
  printf("A continuacion Mostramos las promos que tenemos\n");
  printf("La carta es\n");
  printf("1. 10 piezas de sushi $3000\n");
  printf("2. 20 piezas de sushi $6000\n");
  printf("3. 30 piezas de sushi $9000\n");
  printf("4. 40 piezas de sushi $12000\n");
  printf("5. 50 piezas de sushi $15000\n");
  printf("\n");
}

int selecionCarta(int compra, int precio, int alogomas){
  do{
  printf("Ingrese el numero de la compra que desea llevar\n");
  scanf("%d", &compra);
  switch(compra){
    case 1: printf("A elegido 10 piezas de sushi\n");
            precio += 3000; 
            break;
    case 2: printf("A elegido 20 piezas de sushi\n");
            precio += 6000;
            break;
    case 3: printf("A elegido 30 piezas de sushi\n");
            precio += 9000; 
            break;
    case 4: printf("A elegido 40 piezas de sushi\n");
            precio += 12000; 
            break;
    case 5: printf("A elegido 50 piezas de sushi\n");
            precio += 15000;
            break;
    default: printf("La opcion ingreseda no es validad\n");
  }
  printf("El precio es: %d\n", precio);
  printf("Desea agregar algo mas, coloque 1 para SI y 2 para NO\n");
  scanf("%d",&algomas);
  }while( algomas == 1);
  return precio;
}

void datosDelCliente(char nombre_cliente[],char apellido_cliente[], char contacto[], char direccion[]){
  printf("Necesitaremos los siguientes datos para proceder a repartir\n");
  printf("Ingrese nombre cliente\n");
  scanf("%s", &nombre_cliente[0]);
  printf("\n");
  printf("Ingrese apellido cliente\n");
  scanf("%s", &apellido_cliente[0]);
  printf("\n");
  printf("Ingrese número de contacto del cliente\n");
  scanf("%s", &contacto[0]);
  printf("\n");
  printf("Ingrese dirección de la forma Nombre,Numero del cliente\n");  
  getchar();
  scanf("%[^\n]s", &direccion[0]);
  printf("\n");
  printf("Datos cliente son: %s %s %s %s\n", nombre_cliente, apellido_cliente, contacto, direccion);
}

void menuDirecciones(){
  printf("Ingrese su zona(valor adicional del reparto)\n");
  printf("1. Amanecer - Recabarren $1000\n");
  printf("2. Centro $500\n");
  printf("3. Barrio Ingles $1000\n");
  printf("4. Fundo del carmen $1300\n");
  printf("5. Santa Rosa - San Antonio $1000\n");
  printf("6. Pedro de Valdivia $1000\n");
  printf("7. Pueblo Nuevo - Alcantara $1000\n");
}

void datosPago(int metodo_pago){
  printf("Como desea pagar\n");
  printf("1. Efectivo\n");
  printf("2. Deposito o Tranferencia\n");
  printf("3. Con tarjeta debito o Con tarjeta de Credito\n");
  printf("Ingrese metodo de pago\n");  
  scanf("%d", &metodo_pago);
  switch(metodo_pago){
    case 1: printf("El método de pago seleccionado ha sido efectivo\n");
            printf("Cancele el monto cuando se le entregue el pedido\n");
            break;
    case 2: printf("El método de pago seleccionado ha sido Despósito o Transferencia\n");
            printf("A continuacion les dejamos los datos para que procedan a pagar\n");
            printf("Nombre -> Sushint SPA\n");
            printf("RUT    -> 1111111-1\n");
            printf("Correo -> Sushint.temuco@gmail.com\n");
            printf("Cuenta -> Cuenta Rut, Banco Estado\n");
            printf("Enviar comprobante al número +56945674523\n");
            break;
    default: printf("El método de pago seleccionado ha sido Con tarjeta Debito o Credito\n");
             printf("El repartidor llevara el pasatarjeta, para cancelar el pedido\n");
             break;
  }
  printf("\n");
}