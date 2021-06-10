#include <stdio.h>

int num;
int f0 = 0 , f1 = 1, fb, f3;

int main (){
  //ingrese un numero 
  printf("Ingrese un numero:\n");
  printf("Debe empesar desde el 2 en adelante , ya que los dos primero son 0 y 1\n");
  scanf("%d", &num);

  printf("0\n");
  printf("1\n");
  for (int i = 0 ; i <= num ; i++){
    //Fibonacii f = fn-1 + fn-2
    fb = f0 + f1;
    printf("%d\n", fb);
    //recalculamos variables 
    f0 = f1;
    f1 = fb;
  }
  return 0;
}