#include<stdio.h>


int main (){
    //ejemplo del while(mientras - hacer) , 158 veces
    int impresiones = 0;
    int objetivo = 5;

    while( impresiones < objetivo ){
        printf("Programacion de computadores\n");
        impresiones ++;
    }
    
    //impresion = 5
    // objetivo =5

    do{
        //instrucciones
         printf("pppProgramacion de computadores\n");
        impresiones --;
    }while ((impresiones < objetivo) && (impresiones >0));


    int veces;//voy a decir que son 10
    printf ("ingrese la contidad de vecesque queiere que imprima elFOR por pantalla\n");
    scanf("%d", &veces);

    for ( int i = 0 ; i < veces ; i++ ){
        
        if(i == 2){
            continue;
        }
        printf("EJEMPLO FOR\n");
    }


    return 0;

}