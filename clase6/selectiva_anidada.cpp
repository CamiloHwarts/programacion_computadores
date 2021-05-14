#include <stdio.h>

float nota;

int main (){
    //nota debe ir entre 1.0 y 7.0
    printf("Ingrese nota\n");
    scanf("%f", &nota);

    if ((nota >=1.0) && (nota < 4.0)){
        printf("La nota %f es insuficiente\n", nota);
    } else if (nota < 5.0){
        printf("La nota %f es suficiente\n", nota);
    } else if (nota < 6.0){
        printf("La nota %f esta bien\n", nota);
    } else {
        printf("La nota %f esta muy bien\n", nota);
    } 
    return 0;

}