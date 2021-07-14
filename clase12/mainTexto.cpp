#include <stdio.h>

int main(){
    //Ejemplo Escritura archivo de texto
    char nombre[15];
    char password[5];
    char mail[40];
    FILE* escrituraNombre = fopen("usuarios.txt","w");
    FILE* escrituraPasswords = fopen("passwords.txt","w");
    FILE* escrituraMail = fopen("mail.txt", "w");

    for(int i = 0; i < 1 ; i++){
        printf("Bienvenido usuario %d al registro de usuario:\n", i + 1);
        printf("Ingrese su nombre de usuario \n");
        scanf("%s", nombre );
        printf("Ingrese su posswords:\n");
        scanf("%s", password );
        printf("Ingrese su mail:\n");
        scanf("%s", mail );

        fprintf(escrituraNombre, "%s\n", nombre);
        fprintf(escrituraPasswords, "%s\n", password);
        fprintf(escrituraMail, "%s\n", mail);
    }
    fclose(escrituraNombre);
    fclose(escrituraPasswords);
    fclose(escrituraMail);
    
    //Ejemplo de lectura archivo de texto 
    FILE* lecturaNombre = fopen("usuarios.txt","r");
    FILE* lecturaPasswords = fopen("passwords.txt","r");
    FILE* lecturaMail = fopen("mail.txt", "r");
    for(int i = 0 ; i < 1 ; i++){
        fscanf(lecturaNombre, "%s", nombre);
        fscanf(lecturaPasswords, "%s", password);
        fscanf(lecturaMail, "%s", mail);
        fprintf(stdout, "Usuario %d\n", i + 1);
        fprintf(stdout, "%s %s %s\n", nombre, password, mail);
    }
    fclose(lecturaNombre);
    fclose(lecturaPasswords);
    fclose(lecturaMail);
    return 0;
}