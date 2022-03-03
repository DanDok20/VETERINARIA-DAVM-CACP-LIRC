#include "Directorio.h"

void Directorio::inicializarDatos(){
    mapPropietario[101] = Propietario("Juan","juan@correo.com",101, 321101);
    mapPropietario[102] = Propietario("Pedro","pedro@correo.com",102, 321102);
    mapPropietario[103] = Propietario("Sofia","sofia@correo.com",103, 321103);
    mapMascota[501] = Mascota("Terr", "Perro", 5, 14, "A", "fifi", 501, 1);
    mapMascota[502] = Mascota("Pit", "Perro", 7, 20, "AB", "max", 502, 1);
    mapMascota[503] = Mascota("Mont", "Gato", 3, 10, "O", "fifi", 503, 1);
}

void Directorio::llenarMascota(){
    string raza, tipo, tipoSangre, nombreMascota, fechaDefuncion;
    int edad, peso, mascotaID;
    bool status;
    cout << "Indique la identificación de la mascota: ";
    cin >> mascotaID;
    for(j = mapMascota.begin(); j != mapMascota.end(); ++j){
        if(mascotaID == j->first){
            cout << "Esta mascota ya se encuentra registrada\n";
            return;
        }
    }
    cout << "Indique la nombre de la mascota: ";
    cin >> nombreMascota;
    cout << "Indique la raza: ";
    cin >> raza;
    cout << "Indique el tipo de mascota (Perro, Gato, pez, etc): ";
    cin >> tipo;
    cout << "Indique la tipo de sangre\n";
    cin >> tipoSangre;
    cout << "Indique la edad: ";
    cin >> edad;
    cout << "Indique la peso: ";
    cin >> peso;
    cout << "Indique si la mascota esta viva (1) o muerta (0)\n";
    cin >> status;
    Mascota petTemp(raza, tipo, edad, peso, tipoSangre, nombreMascota, mascotaID, status);
    mapMascota[mascotaID] = petTemp;
    //petTemp.mostrarDatosMascota();
    
}

void Directorio::llenarPropietario(){
    string nombrePropietario, email;
    double propietarioID, telefono;
    cout << "Indique el ID del propietario: ";
    cin >> propietarioID;
    for(i = mapPropietario.begin(); i != mapPropietario.end(); ++i){
        if(propietarioID == i->first){
            cout << "El propietario ya existe en el directorio de la Veterinaria Pulguitas\n";
            return;
        }
    }
    cout << "Indique el nombre del propietario: ";
    cin >> nombrePropietario;
    cout << "Indique el email del propietario: ";
    cin >> email;
    cout << "Indique el telefono del propietario: ";
    cin >> telefono;
    Propietario propieTemp(nombrePropietario, email, propietarioID, telefono);
    mapPropietario[propietarioID] = propieTemp;
    
}

void Directorio::propietariosRegistrados(){

}

void Directorio::informacionPropietarios(){
    for(i = mapPropietario.begin(); i != mapPropietario.end(); ++i){
        cout << i->first << "\n";
        //cout << i->second << "\n";
    }
    
}

void Directorio::informacionMascotas(){

}

void Directorio::propietariosMascota(){

}

void Directorio::mascotasPropietario(){

}

void Directorio::agregarMascotaAPropietario(){

}

void Directorio::agregarPropietarioAMascota(){

}

void Directorio::editarPropietariosDMascota(){

}

void Directorio::eliminarPropietariosDMascota(){

}

void Directorio::listarPropietariosDMascota(){

}

void Directorio::eliminarPropietarioDMascota(){

}

