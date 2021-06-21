/*Suponga un array con N notas de 0.0 a 7.0 (no puede ingresar notas fuera de ese rango),
calcule el promedio, indique la cantidad de aprobados y reprobados, ademas de mostrar la mejor y la peor nota.*/

#include <stdio.h>

int nnotas;
float nota;
float promedio = 0, suma = 0, reprovados = 0, aprovados = 0;
float menornota = 7, mayornota = 0;

int main(){
    printf("Ingrese el numero de notas que decea ingresar\n");
    scanf("%d", &nnotas);

    float notas[nnotas];

    //Pregunta las n notas
    for(int i = 0 ; i < nnotas ; i++){
        do {
            printf("Ingrese nota\n");
            scanf("%f", &nota);
             
            if(nota < 0 || nota > 7){
                printf("Nota ingresada es incorrecta\n");
            }
                //repite hasta poner nota correcta
                //repite cunado es distinto de verdadero
        }while( true != ((nota >= 0) && (nota <= 7) ));

        //guarda la nota en notas[i]
        notas[i] = nota;
    }
    for(int i = 0 ; i < nnotas ; i++){
        //suma de todas las notas
        suma +=  notas[i];
        //Quienes aprovaros y reprovaron
        if( notas[i] < 4){
            reprovados++;
        }else {
            aprovados++;
        }
        //Mayor y menor nota
        if( notas[i] > mayornota){
            mayornota = notas[i];
        }
        if( notas[i] < menornota){
            menornota = notas[i];
        } 
    }

    promedio = suma /nnotas;
    
    printf("Suma de notas = %f\n", suma);
    printf("Promedio de notas = %f\n", promedio);
    printf("Cantidad de reprobados = %f\n", reprovados);
    printf("Cantidad de aprobados = %f\n", aprovados);
    printf("La peor nota es = %f\n", menornota);
    printf("La mejor nota es = %f\n", mayornota);

    return 0;
}

/* matriz 10x10 que tenia numero , hay una maquina que caia en una de esas posicion 
expllorar matriz ,*/