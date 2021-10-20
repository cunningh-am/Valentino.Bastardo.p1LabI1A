#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "color.h"

int listarColores(eColor* lista, int tam)
{
    int ret=0;
    if(lista!=NULL&&tam>0)
    {
        ret=1;
            printf("\n---LISTA DE COLORES---\n");
        for(int i=0; i<tam; i++)
        {
            printf("ID: %d \nCOLOR: %s", lista[i].idColor, lista[i].nombreColor);
            printf("\n----------------------\n");
        }
    }
    return ret;
}
int cargarColor(int id, eColor* lista, int tam,char destino[])
{
    int ret=0;
    if(id>4999&&id<5005&&lista!=NULL&&tam>0&&destino!=NULL)
    {
        ret=1;
        for(int i=0; i<tam; i++)
        {
            if(id==lista[i].idColor)
            {
                strcpy(destino,lista[i].nombreColor) ;
                break;
            }
        }
    }
    return ret;
}

