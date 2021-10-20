#ifndef COLOR_H_INCLUDED
#define COLOR_H_INCLUDED

typedef struct
    {
     int idColor;
     char nombreColor[20];
    }eColor;

/** \brief              imprime una lista de los colores existentes junto con su id
 *
 * \param lista eColor*
 * \param tam int
 * \return int          retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int listarColores(eColor* lista, int tam);
/** \brief               carga el nombre del color dentro de un destino, utilizando el ID para buscarlo
 *
 * \param id int
 * \param lista eColor*
 * \param tam int
 * \param destino[] char
 * \return int          retorna 1 en caso de que la validacion de datos este correcta, 0 en caso de que no
 *
 */
int cargarColor(int id, eColor* lista, int tam,char destino[]);


#endif // COLOR_H_INCLUDED
