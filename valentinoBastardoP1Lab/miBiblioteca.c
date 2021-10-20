#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "miBiblioteca.h"

int menu()
{
    int opcion;
    system("cls");
    printf("--------MENU BICICLETERIA--------\n\n");
    printf("1.  ALTA BICICLETA\n");
    printf("2.  MODIFICAR BICICLETA\n");
    printf("3.  BAJA BICICLETA\n");
    printf("4.  LISTAR BICICLETAS\n");
    printf("5.  LISTAR TIPOS\n");
    printf("6.  LISTAR COLORES\n");
    printf("7.  LISTAR SERVICIOS\n");
    printf("8.  ALTA TRABAJO\n");
    printf("9.  LISTAR TRABAJOS\n");
    printf("10. ELIMINAR TRABAJO\n");
    printf("11. Salir del programa.\n\n");

    ingresarIntPos("opcion",&opcion,0,0);




    return opcion;
}
int ingresarIntPos(char texto[],int* campo,int minimo,int limite)
{
    int ret=0;
    int auxInt;
    if(limite==0)
    {
        limite=2147483647;
    }
    if(texto!=NULL&&campo!=NULL&&limite >(-1))
    {
        printf("Ingrese %s: \n",texto);
        fflush(stdin);
        scanf("%d",&auxInt);
        while(auxInt<minimo||auxInt>limite)
        {
            printf("Invalido. Reingresar %s.\n",texto);
            fflush(stdin);
            scanf("%d",&auxInt);
        }
        *campo=auxInt;
        ret=1;
    }
    return ret;
}
int ingresarStr(char texto[],char* campo,int tam)
{
    int ret=0;
    char auxStr[100];
    if(texto!=NULL&&campo!= NULL&&tam>0)
    {
        printf("Ingrese %s:\n",texto);
        fflush(stdin);
        gets(auxStr);
        while(strlen(auxStr)==0 || strlen(auxStr)>tam)
        {
            printf("Invalido. Reingresar %s:\n",texto);
            fflush(stdin);
            gets(auxStr);
        }
        strcpy(campo, auxStr);
        ret=1;
    }
    return ret;
}
int salirABM()
{
        char rta;
        printf("\nDesea salir del programa? s/n \n");
        fflush(stdin);
        scanf("%c",&rta);
        rta=tolower(rta);
        if(rta=='s')
        {
         return 1;
        }
        else
        {
        return 0;
        }
}
