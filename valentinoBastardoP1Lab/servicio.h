#ifndef SERVICIO_H_INCLUDED
#define SERVICIO_H_INCLUDED

typedef struct
    {
     int idServ;
     char descrServ[25];
     int precio;
    }eServicio;

/** \brief                  imprime una lista de los servicios de un array eServicio, con su ID, nombre y precio
 *
 * \param lista eServicio*
 * \param tam int
 * \return int              retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int listarServicios(eServicio* lista, int tam);
/** \brief                  carga en un destino, la descripcion de un eServicio
 *
 * \param id int
 * \param lista eServicio*
 * \param tam int
 * \param destino[] char    destino donde va a guardar la string de por ejemplo, "Limpieza"
 * \return int              retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int cargarServicio(int id, eServicio* lista, int tam,char destino[]);

#endif // SERVICIO_H_INCLUDED
