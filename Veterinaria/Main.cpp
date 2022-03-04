#include "Directorio.h"

using std::cin;
using std::cout;
using std::string;

void menu(Directorio directorio)
{
    int opcion = 0;
    do
    {
        cout << "======Bienvenidos al directorio de la Veterinaria Pulguitas======\n";
        cout << "1.  Agregar informacion del propietario\n";
        cout << "2.  Agregar informacion de la mascota\n";
        cout << "3.  Agregar contacto de los propietarios responsables de la mascota\n";
        cout << "4.  Eliminar contacto de los propietarios responsables de la mascota\n";
        cout << "5.  Modificar contacto de los propietarios responsables de la mascota\n";
        cout << "6.  Listar contacto de los propietarios responsables de la mascota\n";
        cout << "7.  Mostrar cantidad de propietarios registrados en el directorio\n";
        cout << "8.  Mostrar la informacion de los propietarios registrados\n";
        cout << "9.  Mostrar informacion de las mascotas registradas\n";
        cout << "10. Consultar propietarios responsables de mascota\n";
        cout << "11. Consultar mascotas de propietarios\n";
        cout << "12. Asociar nuevas mascotas a propietario\n";
        cout << "13. Asociar nuevos propietarios a mascotas\n";
        cout << "14. Cambiar status de mascota\n";
        cout << "15. Eliminar propietario de una mascota\n";
        cout << "16. Mostrar los propietarios con su respectiva mascota\n";
        cout << "0.  Salir \n";

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            directorio.llenarPropietario();
            ;
            break;
        case 2:
            directorio.llenarMascota();
            break;
        case 3:
            ;
            break;
        case 4:
            ;
            break;
        case 5:
            ;
            break;
        case 6:
            ;
            break;
        case 7:
            directorio.propietariosRegistrados();
            ;
            break;
        case 8:
            directorio.informacionPropietarios();
            ;
            break;
        case 9:
            directorio.informacionMascotas();
            ;
            break;
        case 10:
            ;
            break;
        case 11:
            ;
            break;
        case 12:
            directorio.propietariosMascota();
            directorio.mostrarMascotaDPropietarios();
            ;
            break;
        case 13:
            ;
            break;
        case 14:
            ;
            break;
        case 15:
            break;
        default:
            break;
        }
    } while (opcion != 0);
}

int main()
{
    Directorio directorio;
    directorio.inicializarDatos();
    menu(directorio);
    return 0;
}