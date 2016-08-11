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
    while(linea != "salida")
    {
        int i = 0;
        int con = 0;
        printf("Ingrese el comando: \n");
        //char linea[256];
        fgets(linea, sizeof(linea), stdin);
        printf("linea: %s", linea);
        char buffer[1024];
        //int rv = sprintf(buffer, linea);
        strcpy(buffer, linea);
        while(buffer[i])
        {
            buffer[i] = tolower(buffer[i]);
            i++;
        }

        char *token = strtok(buffer, " ");

        while(token != NULL)
        {
            printf("token: %s", token);
            strcpy(&comando[con], token);
            con++;
            token = strtok(NULL, "+-");
            //printf("termino tokens");
        }

        //printf("llego antes de la comparación\n");
        printf("primer token: %s\n", comando[0]);
        char primero[25];
        char subcom1[3][50];
        strcpy(primero, comando[0]);


        int size;
        char path[100];
        char unit[1];
        char nombre[50];
        if(strcmp(primero, "mkdisk") == 0)
        {
            //printf("entro al if\n");
            printf("crear un nuevo disco\n");
            char segundo[50];
            char buffer2[50];
            int con2;

            strcpy(buffer2, comando[1]);
            printf("buffer: %s", buffer2);
            char *tok2 = strtok(buffer2, "::");
            while(tok2 != NULL)
            {
                strcpy(&subcom1[con2], tok2);
                con2++;
                tok2 = strtok(NULL, " ");
                strcpy(segundo, subcom1[0]);

            }
            if(strcmp(segundo, "size") == 0)
            {
                printf("tamaño de disco");
                size = atoi(subcom1[2]);
                printf("size es igual %s", subcom1[1]);
            }
            else if(strcmp(segundo, "unit") == 0)
            {
                printf("unidad de tamaño");
            }
            else if(strcmp(segundo, "path") == 0)
            {
                printf("direccion de disco");
            }
            else if(strcmp(segundo, "name") == 0)
            {
                printf("nombre disco");
            }
            else
            {
                printf("nada mas");
            }

        }
        else
        {
            printf("nada");
        }

        //printf("despues del if\n");

    }
    printf("Saliendo del sistema!");
    return 0;
}
