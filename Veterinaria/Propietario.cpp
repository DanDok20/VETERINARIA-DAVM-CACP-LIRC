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

void Propietario::setNombrePropietario(string nombrePropietario){
    this->nombrePropietario = nombrePropietario;
}

void Propietario::setEmail(string email){
    this->email = email;
}

void Propietario::setPropietarioID(double propietarioID){
    this->propietarioID = propietarioID;
}

void Propietario::setTelefono(double telefono){
    this->telefono = telefono;
}

void Propietario::editarPropietario(){
    int opcion = 0;
    double tempID = 0, tempTelefono = 0;
    string tempNombre;
    string tempEmail;
    do
    {
        cout << "Seleccione la informacion que desea editar del propietario\n";
        cout << "1. Nombre\n";
        cout << "2. Email\n";
        cout << "3. Telefono\n";
        cout << "0.  Salir \n";

        cin >> opcion;
        
        switch(opcion)
        {
        case 1:
            cout << "Ingrese el nuevo nombre: ";
            cin >> tempNombre;
            setNombrePropietario(tempNombre);
            break;
        case 2:
            cout << "Ingrese el nuevo email: ";
            cin >> tempEmail;
            setEmail(tempEmail);
            break;
        case 3:
            cout << "Ingrese el nuevo numero telefono: ";
            cin >> tempTelefono;
            setTelefono(tempTelefono);
            break;
        default:
            break;
        }
        
    } while (opcion != 0); 
}

/*string Propietario::getNombrePropietario(){
    return this->nombrePropietario;
}

string Propietario::getEmailPropietario(){
    return this->email;
}

double Propietario::getTelefono(){
    return this->telefono;
}

void Propietario::editarPropietarioVector(Propietario propietario){
    setNombrePropietario(propietario.getNombrePropietario());
    setEmail(propietario.getEmailPropietario());
    setPropietarioID(propietario.getPropietarioID());
    setTelefono(propietario.getTelefono());
}*/



