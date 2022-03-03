#include "Mascota.h"


Mascota::Mascota(){
    raza = "";
    tipo = "";
    edad = 0;
    peso = 0;
    tipoSangre = "";
    nombreMascota = "";
    mascotaID = 0;
    status = true;
}

Mascota::Mascota(string raza, string tipo, int edad, int peso, string tipoSangre, string nombreMascota, int mascotaID, bool status){
    string fecha;
    this->raza = raza;
    this->tipo = tipo;
    this->edad = edad;
    this->peso = peso;
    this->tipoSangre = tipoSangre;
    this->nombreMascota = nombreMascota;
    this->mascotaID = mascotaID;
    this->status = status;
    if(status == false){  //false = muerto
        cout << "Ingrese la fecha de defunsion de la mascota: ";
        cin >> fecha;
        setEstadoDefuncion(fecha);
    }
    else{  //true = vivo
        this->fechaDefuncion = "Esta vivo UwU";
    }
}

void Mascota::setEstadoDefuncion( string fechaDefuncion){
    this->fechaDefuncion = fechaDefuncion;
}

void Mascota::cambiarEstadoDefunsion(){
    string fecha;
    status = 0;
    cout << "Ingrese la fecha de defunsion de la mascota: ";
    cin >> fecha;
    setEstadoDefuncion(fecha);   
}

double Mascota::getMascotaID(){
    return this->mascotaID;
}