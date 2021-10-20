#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "miBiblioteca.h"
#include "tipo.h"
#include "color.h"
#include "servicio.h"
#include "bicicleta.h"
#include "trabajo.h"



#define TAMTIP 4
#define TAMCOL 5
#define TAMSERV 4
#define TAMBICI 100
#define TAMJOB 100

int main()
{
    eTipo tipos[TAMTIP] =
    {
        {1000, "Rutera"},
        {1001, "Carrera"},
        {1002, "Mountain"},
        {1003, "BMX"}
    };
    eColor colores[TAMCOL] =
    {
        {5000, "Gris"},
        {5001, "Blanco"},
        {5002, "Azul"},
        {5003, "Negro"},
        {5004, "Rojo"}
    };
    eServicio servicios[TAMSERV] =
    {
        {20000, "Limpieza",30},
        {20001, "Parche",400},
        {20002, "Centrado",500},
        {20003, "Cadena",450}
    };

    int iterador=1;

    eBici listaBicis[TAMBICI];
    initBicis(listaBicis,TAMBICI);

    eTrabajo listaTrabajos[TAMJOB];
    initTrabajos(listaTrabajos,TAMJOB);

    int nextID=1;
    int jobID=100;

    do
    {
        switch(menu())
        {
        case 1:
            altaBici(listaBicis,TAMBICI,&nextID,tipos,TAMTIP,colores,TAMCOL);
            break;
        case 2:
            if(checkBiciCargada(listaBicis,TAMBICI))
            {
                editBici(listaBicis,TAMBICI,findBiciByID(listaBicis,TAMBICI),tipos,TAMTIP,colores,TAMCOL);
            }
            else
            {
                printf("Cargue primero una bici.\n");
                system("pause");
            }
            break;
        case 3:
            if(checkBiciCargada(listaBicis,TAMBICI))
            {
                removeBici(listaBicis,TAMBICI,findBiciByID(listaBicis,TAMBICI),tipos,TAMTIP,colores,TAMCOL);
            }
            else
            {
                printf("Cargue primero una bici.\n");
                system("pause");
            }
            break;
        case 4:
            if(checkBiciCargada(listaBicis,TAMBICI))
            {
                mostrarBicis(listaBicis,TAMBICI,tipos,TAMTIP,colores,TAMCOL);
                system("pause");
            }
            else
            {
                printf("Cargue primero una bici.\n");
                system("pause");
            }
            break;
        case 5:
            listarTipos(tipos,TAMTIP);
            system("pause");
            break;
        case 6:
            listarColores(colores,TAMCOL);
            system("pause");
            break;
        case 7:
            listarServicios(servicios,TAMSERV);
            system("pause");
            break;
        case 8:
            if(checkBiciCargada(listaBicis,TAMBICI))
            {
                altaTrabajo(listaTrabajos,TAMJOB,&jobID,listaBicis,TAMBICI,servicios,TAMSERV);
            }
            else
            {
                printf("Cargue primero una bici.\n");
                system("pause");
            }
            break;
        case 9:
            if(checkTrabajoCargado(listaTrabajos,TAMJOB))
            {
                mostrarTrabajos(listaTrabajos,TAMJOB,servicios,TAMSERV);
                system("pause");
            }
            else
            {
                printf("Cargue primero un trabajo.\n");
                system("pause");
            }
            break;
        case 10:
            if(checkTrabajoCargado(listaTrabajos,TAMJOB))
            {
                removeTrabajo(listaTrabajos,TAMJOB,findJobByID(listaTrabajos,TAMJOB),servicios,TAMSERV);
            }
            else
            {
                printf("Cargue primero un trabajo.\n");
                system("pause");
            }
            break;
        case 11:
             if(salirABM())
            {
                printf("Decidiste salir.\n");
                iterador=0;
            }
            else
            {
                printf("Salida cancelada.\n");
                system("pause");
            }
            break;

        default:
            printf("Invalido. Ingrese otra opcion.\n");
            system("pause");
            break;
        }
    }
    while(iterador==1);








    return 0;
}
