#include <stdio.h>

int suma = 0;
int num;

int main(){ 
    printf("Ingrese un número, por favor:\n");
    scanf("%d",&num);
    do{
        suma = suma + num;
        printf("Total = %d\n", suma);
        scanf("%d", &num);
    } while( num >= 0);
        printf("Fin\n");
    
    return 0;
}