#include <stdio.h>

float tarea1;
float tarea2;
float tarea3;
float actitudinal;
float prueba1;
float prueba2;
float notaf = 4.0;
float notat;

int main(){
    printf("----------CALCULO NOTA PRUEBA 2 PARA APROVAR------------\n");
    printf("********************************************************\n");
    printf("Ingrese nota tarea 1\n");
    scanf("%f",&tarea1);
    printf("Ingrese nota tarea 2\n");
    scanf("%f",&tarea2);
    printf("Ingrese nota tarea 3\n");
    scanf("%f",&tarea3);
    printf("Ingrese nota actitudinal\n");
    scanf("%f",&actitudinal);
    printf("Ingrese nota prueba 1\n");
    scanf("%f",&prueba1);

    notat = ((tarea1 * 0.1) + (tarea2 * 0.1) + (tarea3 * 0.1));
    prueba2 = ((notaf - notat - (actitudinal * 0.1) - (prueba1 * 0.25)) / 0.35);

    printf("La nota que necesitas en la prueba 2 es: \n%f\n",prueba2);

    

    return 0;
}
