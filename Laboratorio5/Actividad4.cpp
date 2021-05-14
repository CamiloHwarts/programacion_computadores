#include <stdio.h>


float radio;
float area;
float perimetro;
float pi = 3.14;


int main (){

	printf("Ingrse el radio de una circunferencia\n ");
	scanf("%f", &radio);

	area =	pi * radio ^2;
	perimetro = 2 * pi * radio;

	printf("El valor del area es : %f\n",area);
	printf("El valor del perimetro es:%f\n", perimetro);


	return 0;
}