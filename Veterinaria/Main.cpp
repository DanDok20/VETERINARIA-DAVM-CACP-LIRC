#include "Directorio.h"

using std::cin;
using std::cout;
using std::string;

void menu(Directorio directorio)
{
    int opcion = 0;
    do
    {
        cout << "======Bienvenidos======\n";
        cout << "1. \n";
        cout << "0. Salir \n";

        cin >> opcion;

        switch (opcion)
        {
        case 1:
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