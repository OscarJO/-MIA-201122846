#include <stdio.h>
#include <stdlib.h>

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
    //char *token;
    printf("\n\n\n");
    do
    {
        printf("Ingrese el comando: \n");
        //char linea[256];
        fgets(linea, 256, stdin);
        printf("linea: %s", linea);
        char buffer[1024];
        int rv = sprintf(buffer, linea);
        //printf("bufer: %s", buffer);
        char *token = strtok(buffer, " ");
        //printf("token: %c", token);
        //token = strtok(NULL, " ");
        while(token)
        {
            printf("token: %s", &token);
            token = strtok(NULL, " ");
        }
    }
    while(linea != NULL);
    printf("Saliendo del sistema!");
    return 0;
}
