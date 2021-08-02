/* 
 * Nombre de la función: bienvenidaSushi, ingresoHora, cartaSushi, datosDelCliente, 
 * menuZonas, *datosPago, selecionCarta, nPedido, direccion, retiro.
 * Tipo de función:  int y void.
 * Parámetros:   “hora” de tipo int*;
 *               "nombre_cliente" de tipo char;
 *               "apellido_cliente" de tipo char;
 *               "contacto" de tipo char;
 *               "metodo_pago" de tipo int;
 *               "compra" de tipo int;
 *               "precio" de tipo int;
 *               "algomas" de tipo int;
 *               "pedido" de tipo int;
 *               "direcciones" de tipo char;
 *               "localDeli" de tipo int.
 * Dato de retorno:  “precio” de tipo int; “pedido” de tipo int; “localDeli” de tipo *int.
 * Descripción de la función: La función bienvenidaSushi() muestra bienvenidad al *local de sushi;
 *                            La función ingresoHora() recibe el ingreso de hora en que se busca el  
 *                            local.
 *                            La función cartaSushi() muestra carta del sushi.
 *                            La función datosDelCliente() pedimos datos despues de elegir el pedido.
 *                            La función menuZonas() muestra las zonas donde hacemos reparto.
 *                            La función datosPago() preguntamos de que modo desea pagar.
 *                            La función selecionCarta() preguntamos quedesea comprar de la carta y  
 *                            preguntamos *si desea agregar algo mas y retornamos el valor del       
 *                            pedido.
 *                            La función nPedido() sacamos numero de pedido a medida que avanza.
 *                            La función direccion() pide direccion condo damos como opcion el       
 *                            reparto.
 *                            La función retiro() preguntamos si quiere retiro en local o reparto    
 *                            domicilio.
 */
//Implementaciones 

#include <stdio.h>
#include "./librerias.h"

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
void datosDelCliente(){
  char nombre_cliente[20];
  char apellido_cliente[20];
  char contacto[15];
  printf("Necesitaremos los siguientes datos guardar su pedido\n");
  printf("Ingrese nombre cliente\n");
  scanf("%s", &nombre_cliente[0]);
  printf("\n");
  printf("Ingrese apellido cliente\n");
  scanf("%s", &apellido_cliente[0]);
  printf("\n");
  printf("Ingrese número de contacto del cliente\n");
  scanf("%s", &contacto[0]);
  printf("\n");
  
  FILE* clientes = fopen("Clientes.txt", "a+");
  fprintf(clientes, "%s %s %s\n", nombre_cliente, apellido_cliente, contacto);
  fclose(clientes);
}
void menuZonas(){
  printf("Ingrese su zona(valor adicional del reparto)\n");
  printf("1. Amanecer - Recabarren $1000\n");
  printf("2. Centro $500\n");
  printf("3. Barrio Ingles $1000\n");
  printf("4. Fundo del carmen $1300\n");
  printf("5. Santa Rosa - San Antonio $1000\n");
  printf("6. Pedro de Valdivia $1000\n");
  printf("7. Pueblo Nuevo - Alcantara $1000\n");
}
void datosPago(){
  int metodo_pago;
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
int selecionCarta(){
  int compra;
  int precio;
  int algomas;
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
  }while( algomas == 1 );
  return precio;
}
int nPedido(){
  int pedido;
  printf("Su numero de pedido es:\n");
  pedido += 1;
  printf("%d\n",pedido);
  return pedido;
}
void direccion(){
  char direcciones[20];
  printf("Ingrese dirección de la forma Nombre,Numero del domicilio\n");
  getchar();
  scanf("%[^\n]s", &direcciones[0]);
  printf("\n");

  FILE* direccion = fopen("Direcciones.txt", "a+");
  fprintf(direccion,"%s\n", direcciones);
  fclose(direccion);
}
int retiro(){
  int localDeli;
  printf("¿Desea hacer el retiro en local o Delivery?\n");
  printf("Elija 1 para retiro en local o 2 para Delivery\n");
  scanf("%d", &localDeli);
  return localDeli;
}