#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "tipo.h"

int listarTipos(eTipo* lista, int tam)
{
    int ret=0;
    if(lista!=NULL&&tam>0)
    {
        ret=1;
            printf("\n----LISTA DE TIPOS----\n");
        for(int i=0; i<tam; i++)
        {
            printf("ID: %d \nTIPO: %s", lista[i].idTip, lista[i].descTip);
            printf("\n----------------------\n");
        }
    }
    return ret;
}
int cargarTipo(int id, eTipo* lista, int tam,char destino[])
{
    int ret=0;
    if(id>999&&id<10004&&lista!=NULL&&tam>0&&destino!=NULL)
    {
        ret=1;
        for(int i=0; i<tam; i++)
        {
            if(id==lista[i].idTip)
            {
                strcpy(destino,lista[i].descTip) ;
                break;
            }
        }
    }
    return ret;
}
