#include <stdio.h>

int funcion(int x);
void funsion2(int& x);


int main(){
    int numero = 5;
    numero = funcion(numero);
    printf("funsion ->El numero es: %d\n", numero);
    //donde queda guardado
    //printf("%p\n", &numero);
    //Variable tipo puntero 
    //int* numero2 = new int;
    //& <- nos da dirreccion de memoria de la variable 
   // *numero2 = 10;
   
    int numero2 = 7;
    funsion2(numero2);
    printf("funsion2 ->El numero es: %d\n", numero2);

    return 0;
}
int funcion(int x){
    x = x * x;
    
    return x;
}
void funsion2(int& x){// int* <- direccion de momoria de numero
    //* <- indireccion
    //contenido de direccionde memoria apuntad por x
    x = (x) * (x);
}

