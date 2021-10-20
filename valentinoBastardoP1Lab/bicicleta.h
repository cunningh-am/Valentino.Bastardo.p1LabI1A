#ifndef BICICLETA_H_INCLUDED
#define BICICLETA_H_INCLUDED
#include"miBiblioteca.h"
#include "tipo.h"
#include "color.h"

typedef struct
    {
     int idBici;
     char marca[20];
     int idTipo;
     int idColor;
     char material;
     int isEmpty;
    }eBici;

/** \brief              .isEmpty en todas las posiciones de un array eBici en 1 para determinar que estan vacias
 *
 *
 * \param lista eBici*   array eBici
 * \param tam int        tamaño array eBici
 * \return int           retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int initBicis(eBici* lista, int tam);

/** \brief             busca una posicion libre (isEmpty=1) en un array de eBici
 *
 * \param lista eBici* array eBici
 * \param tam int      tamaño array eBici
 * \return int         retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int buscarLibre(eBici* lista, int tam);
/** \brief                    permite dar un alta de un elemento eBici, autogenerando el id, pidiendo campos como el color de la bici y validando, para luego guardarlo en una posicion de un array eBici
 *
 * \param lista eBici*        array eBici
 * \param tam int             tamaño array eBici
 * \param nextId int*         campo del ID autogenerado (suma 1 al dar el alta exitosa, para dejar ya cargado el id de la siguiente alta)
 * \param listaTipo eTipo*    array eTipo para ingresar y validar el tipo de bici
 * \param tamTipo int         tamaño array eTipo
 * \param listaColor eColor*  array eColor para ingresar y validar el color de bici
 * \param tamColor int        tamaño array eColor
 * \return int                retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int altaBici(eBici* lista, int tam, int* nextId,eTipo* listaTipo, int tamTipo, eColor* listaColor, int tamColor);
/** \brief              pide al usuario que ingrese el material de la bici, el cual solo puede ser 'c' o 'a' asique tambien lo valida, luego almacena en el campo mandado por parametro
 *
 * \param campo char*   el destino donde se alojara el char material
 * \return int          retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int ingresarMaterial(char* campo);
/** \brief               imprime en pantalla un elemento eBici y sus campos, obviando el isEmpty
 *
 * \param bici eBici     bici a imprimir
 * \param lista eTipo*   array eTipo para poder cargar descripcion del tipo usando id
 * \param tam int        tamaño array eTipo
 * \param listaC eColor* array eColor para cargar descripcion del color usando id
 * \param tamC int       tamaño array eCOlor
 * \return int           retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int mostrarBici(eBici bici,eTipo* lista, int tam, eColor* listaC, int tamC);
/** \brief              imprime los elementos de un array eBici donde isEmpty este en 0 haciendose valer de mostrarBici()
 *
 * \param lista eBici*
 * \param tam int
 * \param listaT eTipo*
 * \param tamT int
 * \param listaC eColor*
 * \param tamC int
 * \return int          retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int mostrarBicis(eBici* lista, int tam, eTipo* listaT,int tamT, eColor* listaC, int tamC);
/** \brief              bandera dinamica que checkea si hay al menos una bici cargada
 *
 * \param lista eBici*
 * \param tam int
 * \return int          retorna 1 en caso de que haya al menos una, 0 en caso de que no haya ninguna
 *
 */
int checkBiciCargada(eBici* lista,int tam);
/** \brief              permite encontrar, utilizando ID, el indice de una eBici dentro de un array eBici
 *
 * \param lista eBici*
 * \param tam int
 * \return int          retorna indice de la bici dentro del array eBici
 *
 */
int findBiciByID(eBici* lista, int tam);
/** \brief                  permite modificar una bici ya cargada
 *
 * \param list eBici*
 * \param tam int
 * \param index int
 * \param tipos eTipo*
 * \param tamT int
 * \param colores eColor*
 * \param tamC int
 * \return int              retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int editBici(eBici* list, int tam, int index, eTipo* tipos,int tamT,eColor* colores,int tamC);
/** \brief               permite eliminar una bici de forma logica (isEmpty=1)
 *
 * \param list eBici*
 * \param tam int
 * \param index int
 * \param tipos eTipo*
 * \param tamT int
 * \param colores eColor*
 * \param tamC int
 * \return int          retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int removeBici(eBici* list,int tam, int index,eTipo* tipos,int tamT,eColor* colores, int tamC);


#endif // BICICLETA_H_INCLUDED
