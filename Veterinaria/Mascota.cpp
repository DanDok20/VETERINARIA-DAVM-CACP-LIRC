#include "Mascota.h"

Mascota::Mascota(string raza, string tipo, int edad, int peso, string tipoSangre, string nombreMascota, int mascotaID, bool status, string fechaDefuncion){
    this->raza = raza;
    this->tipo = tipo;
    this->edad = edad;
    this->peso = peso;
    this->tipoSangre = tipoSangre;
    this->nombreMascota = nombreMascota;
    this->mascotaID = mascotaID;
    this->status = status;
    this->fechaDefuncion = fechaDefuncion;
}

void Mascota::cambiarEstadoDifunsion(){

}