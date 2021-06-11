#include <stdio.h>



int main (){
    //BUsqueda binaria 
    int valores2[]= {1,7,10,16,20,23,78,100};
    int minimo = 0;//es la posision
    int maximo = 7;
    int central ;
    int busqueda;

    while(minimo <= maximo){
        central = (minimo + maximo)/2;
        if( busqueda == valores2[central]){

        printf("Elvalor %d se encutra en valores [%d]\n", busqueda, central);

        }else{
            if(valores2 [central]> busqueda){
                maximo = central - 1;
            }else{
                minimo = central + 1;
            }
        }
    }

    return  0;
}