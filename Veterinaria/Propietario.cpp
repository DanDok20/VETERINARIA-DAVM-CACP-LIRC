#include "Propietario.h"

Propietario::Propietario(){
    nombrePropietario = "";
    email = "";
    propietarioID = 0;
    telefono = 0;
}

Propietario::Propietario(string nombrePropietario, string email, double propietarioID, double telefono){
    this->nombrePropietario = nombrePropietario;
    this->email = email;
    this->propietarioID = propietarioID;
    this->telefono = telefono;
}

double Propietario::getPropietarioID(){
    return this->propietarioID;
}

