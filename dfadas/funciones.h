#define TamU 6
#define TamA 13

#define OCUPADO 1
#define LIBRE 0

#define ALPHA_ROMEO 1
#define FERRARI 2
#define AUDI 3
#define OTRO 4


typedef struct
{
    int id;
    char nombre[20];
    char apellido[20];
    char tarjeta[20];
    char direccion[20];

    int estado;

}eUsuario;

typedef struct
{
    char patente[30];
    int marca;
    int idAuto;
    int id;

    int estado;

}eAuto;

void ordenarxPatente(eAuto[],int);

void mostrarUsuarios(eUsuario[],int);
void mostrarAutos(eAuto[],int);
void mostrarAutosxUsuario(eUsuario[],int,eAuto[],int);
void mostrarUsuariosAudi(eUsuario[],int,eAuto[],int);
void mostrarEstacionadoConPropietario(eUsuario[],int,eAuto[],int);

void hardcodearUsuarios(eUsuario[],int);
void hardcodearAutos(eAuto[],int);

int inicializarUsuarios(eUsuario[],int);
void inicializarAutos(eAuto[],int);

/** \brief Da de alta un usuario y toma sus datos
 *
 * \param array de tipo eUsuario
 * \param variable de control de iteraciones
 * \return -1 si el indice devuelto es menor a 0
 *          0 si logra cargar los datos
 */
int eUsuario_alta(eUsuario[],int);

/** \brief Permite modificar dato en la estructura eUsuario
 *
 * \param array de tipo eUsuario
 * \param variable de control de iteraciones
 * \return -1 si el la variable de control de iteraciones es menor a 0 y si el array es nulo
 *         -2 si toma el id pero no encuentra usuario con el id correspondiente
 *          0 si logra modificar los datos
 */
int eUsuario_modificacion(eUsuario[],int);

/** \brief Permite dar de baja logica a un usuario del array eUsuario
 *
 * \param array de tipo eUsuario
 * \param variable de control de iteraciones
 * \return -1 si cancela la baja
 *          0 si la baja es exitosa
 */
int eUsuario_baja(eUsuario[],int);

/** \brief Da de alta un auto y toma sus datos
 *
 * \param array de tipo eAuto
 * \param variable de control de iteraciones
 * \return -1 Si no logra asignar auto ingresante a un usuario
 *          0 Si logra dar de alta el auto
 */
int eAuto_alta(eAuto[],int,eUsuario[],int);
int finalizarAuto(eUsuario[],int,eAuto[],int); //eAuto_baja;

/** \brief Otorga el indice donde se puedan guardar datos si es que hay.
 *
 * \param array de tipo eUsuario
 * \param int variable de control de iteraciones
 * \return -1 si el limite es menor a 0 y si el array es nulo
 *         -2 si no hay lugar para guardar datos
 *          Indice donde puede guardar datos
 */
int eUsuario_buscarLugarLibre(eUsuario[],int);

/** \brief Genera un id autoincremental
 *
 * \param array de tipo eUsuario
 * \param int variable de control de iteraciones
 * \return 0 si el limite de iteraciones es menor a 0 y si el array es nulo
 *         retorno que sera indice+1 que sera el id generado
 */
int eUsuario_siguienteId(eUsuario[],int);

int eAuto_buscarLugarLibre(eAuto[],int);
int eAuto_siguienteId(eAuto[],int);

int recuadacionTotal(eAuto[],int);
void recaudacionTotalxMarca(eAuto[],int);


