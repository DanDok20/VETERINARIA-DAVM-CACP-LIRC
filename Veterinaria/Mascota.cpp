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
        cout << "Ingrese la fecha de defuncion de la mascota: ";
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

void Mascota::cambiarEstadoDefuncion(){
    string fecha;
    status = 0;
    cout << "Ingrese la fecha de defuncion de la mascota: ";
    cin >> fecha;
    setEstadoDefuncion(fecha);
}

double Mascota::getMascotaID(){
    return this->mascotaID;
}

void Mascota::mostrarDatosMascota(){
    cout << "El numero de identificacion de la Mascota es: " << mascotaID << "\n";
    cout << "El nombre de la Mascota es: " << nombreMascota << "\n";
    cout << "La raza de la Mascota es: " << raza << "\n";
    cout << "La Mascota es: " << tipo << "\n";
    cout << "La edad de la Mascota es: " << edad << "\n";
    cout << "El peso de la Mascota es: " << peso << "\n";
    cout << "El tipo de sangre de la Mascota es: " << tipoSangre << "\n";
    cout << "El status de la mascota esta: ";
    if(status == false){
        cout << "muerta\n";
        cout << "La mascota murio el: " << fechaDefuncion << "\n";
    }
    else{
       cout << "viva\n"; 
    }
    cout << "\n";
}