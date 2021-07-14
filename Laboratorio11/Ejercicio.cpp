/*Actividad 1: Manejo de agenda de contactos.
Escriba un programa capaz de crear, editar y eliminar archivos y
buscar información dentro de ellos. El archivo debe simular una agenda telefónica y 
cada registro debe cumplir con el formato “Nombre Apellido Teléfono”.
Además, el programa debe incluir un menú con las opciones anteriormente mencionadas y 
añadir la opción Salir para terminar la ejecución del programa. El programa
debe ser capaz de manejar distintos archivos y para identificarlos el usuario debe ingresar el nombre.
Nota: Utilice una ruta específica para guardar y ubicar los archivos.*/

//dos tareas 
//se ejecute eternamente hasta que el ususuario aprete salir 
//implementar funsiones

#include <stdio.h>
#include <stdlib.h> // sytem() -> llamadas a sistema
#include <string.h> // funsiones para cadena de caracteres


int opcion;
FILE* agenda;
char nombreArchivo[20];
char apellido[15];
char nombre[15];
char telefono[15];
//Prototipos
void menuInicio();
void menuAgenda();
void listarAgendas();
void crearAgenda(char nombreArchivo[20]);
void seleccionAgenda();
void lecturaAgenda(char nombreArchivo[20], char nombre[15], char apellido[15], char telefon[15]);
void pedirDatos(char nombre[15], char apellido[15], char telefono[15]);
void agregarRegistro(char nombreArchivo[20], char nombre[15], char apellido[15], char telefon[15]);
void eliminarAgenda(char nombreArchivo[20]);

int main(){
    //Menu 
    menuInicio();
    do{
    menuAgenda();
    printf("Ingrese opcion\n");
    scanf("%d", &opcion);
    switch(opcion){
        case 1: //listar todo elementos que tengas .txt en el nombre
                //(./agendas/ quiere decir dentro de esta carpeta)
                //system( " ls ./agendas/*.txt" );
                listarAgendas();
                break;
        case 2: crearAgenda(nombreArchivo);
                break;
        case 3: listarAgendas();
                seleccionAgenda();
                lecturaAgenda(nombreArchivo, nombre, apellido, telefono);
                break;
        case 4: listarAgendas();
                seleccionAgenda();
                pedirDatos(nombre, apellido,  telefono);
                agregarRegistro(nombreArchivo, nombre, apellido, telefono);
                break;
        case 5: listarAgendas();
                eliminarAgenda(nombreArchivo);
                break;
        case 6: break;
        default: printf("La opcion elegida no es valida.\n");
    }
    }while(opcion != 6);
    return 0;
}
void menuInicio(){
    printf("--------------------------------------\n");
    printf("----------AGENDA TELEFONICA-----------\n");
    printf("--------------------------------------\n"); 
}
void menuAgenda(){
    printf("     Que desea realiar\n");
    printf("listar agendas                  -> 1\n");
    printf("crear agendas                   -> 2\n");
    printf("Mostrar registros de una agenda -> 3\n");
    printf("Añadir registro en agenda       -> 4\n");
    printf("eliminar agenda                 -> 5\n");
    printf("salir                           -> 6\n");
}
void listarAgendas(){
    printf("Las agendas de contacto son\n");
    system( " ls *.txt" );
}
void crearAgenda(char nombreAgenda[]){
    printf("Ingrese el nombre de la agenda que quiere crear\n");
    scanf("%s", nombreArchivo);//familia
    strcat(nombreArchivo, ".txt");
    agenda = fopen(nombreArchivo, "w");
    fclose(agenda);
}
void seleccionAgenda(){
    printf("Ingrese el nombre de la agenda que quiere ver\n");
    scanf("%s", nombreArchivo);
    strcat(nombreArchivo, ".txt");
}
void lecturaAgenda(char nombreArchivo[20], char nombre[15], char apellido[15], char telefon[15]){
    //arbrir el archivo en modo lectura "r"
    agenda = fopen(nombreArchivo, "r");
    //imprimir
    while(!feof(agenda)){
        fscanf(agenda, "%s %s %s\n", nombre, apellido, telefono);
        printf("%s %s %s\n", nombre, apellido, telefono);
    }
     //cerrar flujo
    fclose(agenda);
}
void pedirDatos(char nombre[15], char apellido[15], char telefono[15]){
    //pedir datos de contacto
    printf("Ingrese el nombre del contacto\n");
    scanf("%s", nombre);
    printf("Ingrese el apellido del contacto\n");
    scanf("%s", apellido);
    printf("Ingrese el telefono del contacto\n");
    scanf("%s", telefono);
}
void agregarRegistro(char nombreArchivo[20], char nombre[15], char apellido[15], char telefon[15]){
    //modificar el archivo(agrgegar el registro)
    agenda = fopen(nombreArchivo, "a");
    fprintf(agenda, "%s %s %s\n", nombre, apellido, telefono);
    fclose(agenda);
}
void eliminarAgenda(char nombreArchivo[20]){
    //preguntarle cual quiere eliminar
    printf("Ingrese el nombre de la agenda que quiere eliminar\n");
    scanf("%s", nombreArchivo);
    strcat(nombreArchivo, ".txt");
    //eliminar la agenda
    remove(nombreArchivo);
    printf("La agenda %s a sido eliminada correctamente!\n", nombreArchivo);
}