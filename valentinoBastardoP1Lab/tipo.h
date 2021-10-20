#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED
typedef struct
    {
     int idTip;
     char descTip[20];
    }eTipo;

/** \brief              imprime una lista de los tipos existentes junto con su id
 *
 * \param lista eTipo*
 * \param tam int
 * \return int          retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int listarTipos(eTipo* lista, int tam);
/** \brief              carga la descripcion del tipo dentro de un destino, utilizando el ID para buscarlo
 *
 * \param id int
 * \param lista eTipo*
 * \param tam int
 * \param destino[] char
 * \return int          retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int cargarTipo(int id, eTipo* lista, int tam,char destino[]);


#endif // TIPO_H_INCLUDED
