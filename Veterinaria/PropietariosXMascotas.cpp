#include "PropietariosXMascostas.h"

PropietariosXMascotas::PropietariosXMascotas(Propietario propietario, Mascota mascota){
    this->propietario = propietario;
    this->mascota = mascota;
}

Propietario PropietariosXMascotas::getPropietario(){
    return this->propietario;
}

Mascota PropietariosXMascotas::getMascota(){
    return this->mascota;
}

void PropietariosXMascotas::motrarDatosPropietariosXMascotas(){
    propietario.mostrarDatosPropietario();
    mascota.mostrarDatosMascota();
    cout << "------------------------------------------------\n";
}