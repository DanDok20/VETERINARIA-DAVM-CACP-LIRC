#include "PropietariosXMascostas.h"

PropietariosXMascotas::PropietariosXMascotas(){
    idPropXMascotas = 0;
}

PropietariosXMascotas::PropietariosXMascotas(Propietario propietario, Mascota mascota, int idPropXMascotas){
    this->propietario = propietario;
    this->mascota = mascota;
    this->idPropXMascotas = idPropXMascotas;

}

Propietario PropietariosXMascotas::getPropietario(){
    return this->propietario;
}

Mascota PropietariosXMascotas::getMascota(){
    return this->mascota;
}

void PropietariosXMascotas::motrarDatosPropietariosXMascotas(){
    cout << "Id: " << idPropXMascotas << "\n";
    propietario.mostrarDatosPropietario();
    mascota.mostrarDatosMascota();
    cout << "------------------------------------------------\n";
}

double PropietariosXMascotas::getIdPropXMascotas(){
    return this->idPropXMascotas;
}