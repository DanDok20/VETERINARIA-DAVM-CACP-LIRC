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

void Propietario::mostrarDatosPropietario(){
    cout << "El numero de identificacion del Propietario es: " << propietarioID << "\n";
    cout << "El nombre del Propietario es: " << nombrePropietario << "\n";
    cout << "El email del Propietario es: " << email << "\n";
    cout << "El telefono del Propietario es: " << telefono << "\n";
    cout << "\n";
}