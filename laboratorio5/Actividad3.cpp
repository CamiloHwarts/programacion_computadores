#include <stdio.h>

float numero1;
float numero2;
float multiplicacion;

int main (){

	printf("Ingrese dos numeros de la forma (x.y)\n");
	scanf("%f\n", &numero1);
	scanf("%f", &numero2);
	multiplicacion = numero1 * numero2;
	printf("El producto entre %f y %f es:\n %f\n",numero1, numero2, multiplicacion);

	return 0;
}