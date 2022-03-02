#ifndef PROPIETARIO_H
#define PROPIETARIO_H

#include <iostream>

using std::string;

class Propietario{
    private:
        string nombrePropietario;
        string email;
        double propietarioID;
        double telefono;
    public:
        Propietario(string nombrePropietario, string email, double propietarioID, double telefono);
        
};
#endif