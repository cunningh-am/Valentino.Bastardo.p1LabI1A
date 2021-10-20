#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "servicio.h"

int listarServicios(eServicio* lista, int tam)
{
    int ret=0;
    if(lista!=NULL&&tam>0)
    {
        ret=1;
            printf("\n--LISTA DE SERVICIOS--\n");
        for(int i=0; i<tam; i++)
        {
            printf("ID: %d \nSERVICIO: %s \nPRECIO: $%d", lista[i].idServ, lista[i].descrServ,lista[i].precio);
            printf("\n----------------------\n");
        }
    }
    return ret;
}
int cargarServicio(int id, eServicio* lista, int tam,char destino[])
{
    int ret=0;
    if(id>=20000&&id<=20003&&lista!=NULL&&tam>0&&destino!=NULL)
    {
        ret=1;
        for(int i=0; i<tam; i++)
        {
            if(id==lista[i].idServ)
            {
                strcpy(destino,lista[i].descrServ) ;
                break;
            }
        }
    }
    return ret;
}
