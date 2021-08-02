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
 * 
 */
#include <stdio.h>

int respuesta;
char correo_electronico[40];
char nombre_repartidor[20];
char apellido_repartidor[20];
int contacto_repartidor;
char rut_repartidor[15];
int contacto_emergencia;
char numero_patente[15];
char contraseña[10];
int boton;


int main() {
    //Proceso del repartidor
    printf("\n");
    printf("\n");
    printf("\n");
    printf("-------------------------------------------------------\n");
    printf("---------Bienvenido a nuestro local de Sushi!----------\n");
    printf("-----------------------**SUSHINT**---------------------\n");
    printf("---------Abierto desde las 18:00 hastas las 22:00------\n");
    printf("\n");

    printf("Ingrese si se encuentra registrado en el sistema\n");
    printf("SI esta registrado coloque 1 o si NO coloque 2\n");
    scanf("%d",&respuesta);
    if( respuesta == 1){
      //Se regsitra para empezar a tomar el pedido
      printf("Por favor ingrese su correo electronico:\n");
      scanf("%s", &correo_electronico[0]);
      printf("\n");
      printf("Ingrese contrasena\n");
      scanf("%s",&contraseña[0]);
      printf("\n");

    } else{
      //Creamos cuenta del repartidor , pidiendole sus datos
      printf("Por favor , para su regitro necesitamos los siguientes datos:\n");
      printf("Ingrese nombre\n");
      scanf("%s", &nombre_repartidor[0]);
      printf("\n");
      printf("Ingrese apellido\n");
      scanf("%s", &apellido_repartidor[0]);
      printf("\n");
      printf("Nombre repartidor : %s %s\n", nombre_repartidor, apellido_repartidor);
      printf("Ingrese su Rut\n");
      scanf("%s", &rut_repartidor[0]);
      printf("\n");
      printf("Ingrese un número de contacto\n");
      scanf("%d", &contacto_repartidor);
      printf("\n");
      printf("Ingrese un número en caso de emergencia\n");
      scanf("%d", &contacto_emergencia);
      printf("\n");
      printf("Ingrese el número de patente de su vehiculo\n");
      scanf("%s", &numero_patente[0]);
      printf("\n");

      printf("Ya casi terminamos el registro!!!");
      printf("\n");

      printf("Por favor ingrese su correo electronico:\n");
      scanf("%s", &correo_electronico[0]);
      printf("\n");
      printf("Por favor ahora debe crear su contraseña\n");
      printf("Ingrese contrasena que desee, con maximo 10 elementos\n");
      scanf("%s",&contraseña[0]);
      printf("\n");

      printf("Registro completado\n");
      printf("\n");
    }
    int pedido;

    int numero_pedidos = 7;
    //Zona donde hay pedidos
    int zona;
    //si quiere sumar mas pedidos de otras zonas 
    int mas_pedidos;
    //iniciar reparto
    int inicio;
    //Para avizar si esta en emergencia 
    int emergencia;
    //termino de reparto
    int termino;

    printf("Numero de pedidos son :%d\n", numero_pedidos);
    do{
    printf("Desea recibir lista de pedidos\n");
    printf("SI = 1 o NO = 2\n");
    scanf("%d",&pedido);
    }while( pedido != 1);
    
    //Pedidos por zona
    do{
    printf("Los pedidos estan por zona\n");
    printf("¿Que zona desea elegir?\n");
    printf("Zona 1 -> Amanecer - Recabarren\n");
    printf("Zona 2 -> Centro\n");
    printf("Zona 3 -> Barrio Ingles\n");
    printf("Zona 4 -> Fundo El Carmen\n");
    printf("Zona 5 -> Santa Rosa - San Antonio\n");
    printf("Zona 6 -> Pedro de Valdivia\n");
    printf("Zona 7 -> Pueblo Nuevo - Alcantara\n");

    scanf("%d", &zona);
    
    switch(zona){
      case 1: 
              printf("\n");
              printf("Ha escogido Zona 1\n");
              printf("Tenemos los siguientes repartos\n");
              printf("1. Garivaldi,234\n");
              printf("2. Recabarren, 123\n");
              
              break;
      case 2:
              printf("\n");
              printf("Ha escogido Zona 2\n");
              printf("Tenemos los siguientes repartos\n");
              printf("No hay pedidos\n");
              
              break;
      case 3:
              printf("\n");
              printf("Ha escogido Zona 3\n");
              printf("Tenemos los siguientes repartos\n");
              printf("3. Las encina, 1245\n");
              
              break;
      case 4:
              printf("\n");
              printf("Ha escogido Zona 4\n");
              printf("Tenemos los siguientes repartos\n");
              printf("4. Ribalta, 245\n");

              break;
      case 5:
              printf("\n");
              printf("Ha escogido Zona 5\n");
              printf("Tenemos los siguientes repartos\n");
               printf("5. Antifil, 543\n");
              break;
      case 6:
              printf("\n");
              printf("Ha escogido Zona 6\n");
              printf("Tenemos los siguientes repartos\n");
              printf("6. Pedro Valdia, 564\n");
              printf("7. Regidor Francisco Poblete, 1400\n");
              break;
      default:
              printf("\n");
              printf("Ha escogido Zona 7\n");
              printf("Tenemos los siguientes repartos\n");
              printf("No hay pedidos\n");

    }
    //Preguntamos si desea agregar mas pedidos por zona sino pasar a repartir 
    printf("¿Quiere agregar mas pedidos?, 1 = SI y 2 = NO\n");
    scanf("%d",&mas_pedidos);
    }while( mas_pedidos == 1);

    //Generamos ruta optima por GPS
    printf("La ruta optima ha sido creada por GPS\n");

    //Desea empezar reparto 
    do{
    printf("Desea empezar reparto, SI = 1 y NO = 2\n");
    scanf("%d", &inicio);
    }while( inicio != 1);
    if( inicio == 1){
      printf("Su pedido esta en camino\n");
    }else{
      printf("Su pedido aun no sale\n");
    }

    //Estas en emergencia, para dar aviso o no a los carabineros o al cliente y al sushi
    printf("¿Estas en emergencia?\n");
    printf("SI = 1 y NO = 2\n");
    scanf("%d", &emergencia);
    if( emergencia == 1 ){
      printf("Presione boton de volumen 5 veces\n");
      printf("La alerta se ha enviado al empleador\n");
      printf("Se le ha alertado a Carabineros\n");

    } else {
      printf("Reparto en camino\n");
    }

    //Seguimiento para ver si termino el reparto
    do{
    printf("El reparto ha terminado\n");
    printf("SI = 1 y NO = 2\n");
    scanf("%d", &termino);
    }while( termino == 2);

    //El reparto ha terminado
    printf("El reparto ha terminado\n");

  return 0;
}