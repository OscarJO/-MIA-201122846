#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    printf("Universidad de San Carlos de Guatemala.\n");
    printf("Facultad de Ingenieria.\n");
    printf("Escuela de Ciencias y Sistemas.\n");
    printf("Manejo e Implementacion de Archivos.\n");
    printf("Segundo semestre de 2016.\n\n\n");
    printf("-------  PROYECTO  -------");
    //const char* linea;
    char linea[256];
    char comando[15][256];
    //char *token;
    printf("\n\n\n");
    do
    {
        int i = 0;
        int con = 0;
        printf("Ingrese el comando: \n");
        //char linea[256];
        fgets(linea, sizeof(linea), stdin);
        //printf("linea: %s", linea);
        char buffer[1024];
        //int rv = sprintf(buffer, linea);
        strcpy(buffer, linea);
        while(buffer[i])
        {
            buffer[i] = tolower(buffer[i]);
            i++;
        }
        //printf("bufer: %s", buffer);
        char *token = strtok(buffer, " ");
        //printf("primer token: %s\n", &token);
        //printf("token: %c", token);
        //token = strtok(NULL, " ");
        while(token != NULL)
        {

            printf("token: %s", token);
            strcpy(&comando[con], token);
            con++;
            token = strtok(NULL, " ");
        }
        //printf("primer token: %s", comando[1]);
    }
    while(linea != "salir");
    printf("Saliendo del sistema!");
    return 0;
}
