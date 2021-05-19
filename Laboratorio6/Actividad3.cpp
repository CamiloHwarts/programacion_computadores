#include <stdio.h>

long acceso;

int main(){

    acceso = 19722006;

    //Pedimos codigo de acceso
    printf("Ingrese su codigo de acceso\n");
    printf("Su codigo de acceso es su rut sin codigo verificador\n");
    scanf("%lu", &acceso);

    if ( acceso == 19722006 ){
       printf("BIENVENIDO\n");

    } else {
        printf("¡ERROR!\n");
        printf("Por favor vuelva a ingresar su codigo de acceso\n");
        printf("Le quedan 2 intentos\n");
        scanf("%lu", &acceso);
        if (acceso == 19722006){
            printf("BIENVENIDO\n");
        } else {
        printf("¡ERROR!\n");
        printf("Por favor vuelva a ingresar su codigo de acceso\n");
        printf("Le quedan 1 intento\n");
        scanf("%lu", &acceso);
        if (acceso == 19722006){
            printf("BIENVENIDO\n");
        }else {
        printf("Usuario Bloqueado\n");
        }
        }
    }
    return 0;
}