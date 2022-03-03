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
        cout << "1.  Agregar contacto de los propietarios responsables de la mascota\n";
        cout << "2.  Eliminar contacto de los propietarios responsables de la mascota\n";
        cout << "3.  Modificar contacto de los propietarios responsables de la mascota\n";
        cout << "4.  Listar contacto de los propietarios responsables de la mascota\n";
        cout << "5.  Mostrar cantidad de propietarios registrados en el directorio\n";
        cout << "6.  Mostrar la informacion de los propietarios registrados\n";
        cout << "7.  Mostrar informacion de las mascotas registradas\n";
        cout << "8.  Consultar propietarios responsables de mascota\n";
        cout << "9.  Consultar mascotas de propietarios\n";
        cout << "10. Asociar nuevas mascotas a propietario\n";
        cout << "11. Asociar nuevos propietarios a mascotas\n";
        cout << "12. Cambiar status de mascota\n";
        cout << "13. Eliminar propietario de una mascota\n";
        cout << "0. Salir \n";

        cin >> opcion;

        switch (opcion)
        {
        case 1:
            ;
            break;
        case 2:
            ;
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
            ;
            break;
        case 8:
            ;
            break;
        case 9:
            ;
            break;
        case 10:
            ;
            break;
        case 11:
            ;
            break;
        case 12:
            ;
            break;
        case 13:
            ;
            break;   
        default:
            break;
        }
    } while (opcion != 0);
}

int main()
{
    Directorio directorio;
    menu(directorio);
    return 0;
}