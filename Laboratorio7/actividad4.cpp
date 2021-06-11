#include<stdio.h>


int num;

int main(){
    printf("Ingrese un numero:\n");
    scanf("%d", &num);

    for (int i = 1 ; i <= num ; i++){
        //comprobar si es primo o no
        if(i ==1 || i ==2 ){
            //hacer algo especifico 
            printf("%d\n",i);
        } else {
            for (int j= 1 ; j <= num - 2 ; j ++){
                //comprobar si j es divisor de i
                while ( i % j == 0){
                    printf("primo\n");
                    break;
                }
            }
        }
    }
    return 0;

}