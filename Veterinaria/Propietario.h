#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>

using std::string;
using std::cin;
using std::cout;

class Propietario{
    private:
        string nombrePropietario;
        string email;
        double propietarioID;
        double telefono;
    public:
        Propietario();
        Propietario(string nombrePropietario, string email, double propietarioID, double telefono);
        double getPropietarioID();
        void mostrarDatosPropietario();
};
#endif