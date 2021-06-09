//libreria 
#include <stdio.h>
//Variable globales 
 //ENTRADAS = OPCION Y DOS NUMEROS
 //SALIDAS = RESULTADOS
int opcion;
int numero1;
int numero2;
int resultado;


//Funsion principal 
int main (){
    //Calculadora 
    //Presentacion lo primero del programa y saludo al usuario
    printf("----------------------------------\n");
    printf("-------------BIENVENIDO---------------------\n");
    printf("-----------------A LA -----------------\n");
    printf("-----------------CALCULADORA-----------------\n");
    printf("-----------------ICC202-5-----------------\n");
    printf("----------------------------------\n");
    //Menu de opciones (suma - resta - multiplicacion - division)
    printf("1.- SUMA\n");
    printf("2.- RESTA\n");
    printf("3.- MULTIPLICACION\n");
    printf("4.- DIVICION\n");
    printf("Seleccione la operacion qu desea realizar ");
    //obtener la respuesta del usuario (ante el menu)
    scanf("%d", &opcion);
    //Dependiendo de la respuesta vamos a realizar una operacion 
    switch(opcion){
        case 1: printf("SUMA\n");
                //Pedir dos numeros al usuario 
                printf("Ingrese el primer numero ");
                scanf("%d", &numero1);
                printf("Ingrese el segundo numero ");
                scanf("%d", &numero2);
                //realizar operacion
                resultado = numero1 + numero2;
                 //Entregar el resultado 
                printf("Elresultado de la suma entre %d y %d es %d\n", numero1, numero2, resultado);
                break;
        case 2: printf("RESTA\n");
                //Pedir dos numeros al usuario 
                printf("Ingrese el primer numero ");
                scanf("%d", &numero1);
                 printf("Ingrese el segundo numero ");
                scanf("%d", &numero2);
                //realizar operacion
                resultado = numero1 - numero2;
                 //Entregar el resultado 
                 printf("Elresultado de la resta entre %d y %d es %d\n", numero1, numero2, resultado);
                break;
        case 3: printf("MULTIPLICACION\n");
                //Pedir dos numeros al usuario 
                printf("Ingrese el primer numero ");
                scanf("%d", &numero1);
                printf("Ingrese el segundo numero ");
                scanf("%d", &numero2);
                //realizar operacion
                resultado = numero1 * numero2;
                 //Entregar el resultado 
                 printf("Elresultado de la smultipicacion entre %d y %d es %d\n", numero1, numero2, resultado);
                break;
        case 4: printf("DIVISION\n");
                //Pedir dos numeros al usuario 
                printf("Ingrese el primer numero ");
                scanf("%d", &numero1);
                 printf("Ingrese el segundo numero ");
                scanf("%d", &numero2);
                //realizar operacion
                resultado = numero1 / numero2;
                 //Entregar el resultado 
                 printf("Elresultado de la division entre %d y %d es %d\n", numero1, numero2, resultado);
                break;
        default: printf("La opcion ingresada no es valida\n");        

    }
    //Pedir dos numeros al usuario 
    //realizar operacion
    //Entregar el resultado 



    return 0;
}