#include "Directorio.h"

Directorio::Directorio(){
    contId = 1;
}

int Directorio::getContId(){
    return this -> contId;
}

void Directorio::inicializarDatos(){
    mapPropietario[101] = Propietario("Juan","juan@correo.com",101, 321101);
    mapPropietario[102] = Propietario("Pedro","pedro@correo.com",102, 321102);
    mapPropietario[103] = Propietario("Sofia","sofia@correo.com",103, 321103);
    mapMascota[501] = Mascota("Terr", "Perro", 5, 14, "A", "fifi", 501, 1);
    mapMascota[502] = Mascota("Pit", "Perro", 7, 20, "AB", "max", 502, 1);
    mapMascota[503] = Mascota("Mont", "Gato", 3, 10, "O", "fifi", 503, 1);
}

void Directorio::agregarMascota(){
    string raza, tipo, tipoSangre, nombreMascota, fechaDefuncion;
    int edad, peso;
    double mascotaID;
    bool status;
    cout << "Indique la identificacion de la mascota: ";
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
    cout << "Indique el tipo de mascota (Perro, Gato, Pez, otro): ";
    cin >> tipo;
    cout << "Indique la tipo de sangre: ";
    cin >> tipoSangre;
    cout << "Indique la edad: ";
    cin >> edad;
    cout << "Indique la peso: ";
    cin >> peso;
    cout << "Indique si la mascota esta viva (1) o muerta (0): ";
    cin >> status;
    Mascota petTemp(raza, tipo, edad, peso, tipoSangre, nombreMascota, mascotaID, status);
    mapMascota[mascotaID] = petTemp;
}

void Directorio::agregarPropietario(){
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

void Directorio::cantidadPropietariosRegistrados(){
    int cantidad = 0;
    for(i = mapPropietario.begin(); i != mapPropietario.end(); ++i){
        cantidad++;
    }
    cout << "El directorio tiene " << cantidad << " propietarios registrados\n";
}

void Directorio::informacionPropietariosRegistrados(){
    for(i = mapPropietario.begin(); i != mapPropietario.end(); ++i){
        i->second.mostrarDatosPropietario();
    }   
}

void Directorio::informacionMascotasRegistradas(){
    for(j = mapMascota.begin(); j != mapMascota.end(); ++j){
        j->second.mostrarDatosMascota();
    }
}

void Directorio::asociarPropietarioMascotas(){
    double idPet = 0, idProp = 0;
    int cantidadMascotas = 0;
    cout << "Ingrese el numero de identificacion del propietario: ";
    cin >> idProp;
    cout << "Ingrese la cantidad de mascotas que desea asociar con este propietario: ";
    cin >> cantidadMascotas;
    for( int i = 0; i < cantidadMascotas; i++ ){
        cout << "Ingrese el numero de identificacion de la mascota la cual desea asociar: ";
        cin >> idPet;
        PropietariosXMascotas objet1(mapPropietario[idProp], mapMascota[idPet], contId++);
        propietariosXMascotas.push_back(objet1);
    }
}

void Directorio::asociarMascotaPropietarios(){
    double idPet = 0, idProp = 0;
    int cantidadPropietarios = 0;
    cout << "Ingrese el numero de identificacion de la mascota: ";
    cin >> idPet;
    cout << "Ingrese la cantidad de propietarios que desea asociar con esta mascota: ";
    cin >> cantidadPropietarios;
    for( int i = 0; i < cantidadPropietarios; i++ ){
        cout << "Ingrese el numero de identificacion del propietario que se va asociar con esta mascota: ";
        cin >> idProp;
        PropietariosXMascotas objet1(mapPropietario[idProp], mapMascota[idPet], contId++);
        propietariosXMascotas.push_back(objet1);
    }  
}

void Directorio::mostrarDirectorio(){
    for(int i = 0; i < propietariosXMascotas.size(); i++){
        propietariosXMascotas[i].motrarDatosPropietariosXMascotas();
    }
}

void Directorio::editarInfoPropietarioDMascota(){
    double idPropietario = 0, idPet = 0;
    int opcion = 0;
    cout << "Ingrese el numero de identificacion de la mascota: ";
    cin >> idPet;
    for(int l = 0; l < propietariosXMascotas.size(); l++){
        if(propietariosXMascotas[l].getMascota().getMascotaID() == idPet){
            propietariosXMascotas[l].motrarDatosPropietariosXMascotas();
        }
    }
    cout << "Ingrese el numero de identificacion del propietario que desea editar: ";
    cin >> idPropietario;
    mapPropietario[idPropietario].editarPropietario();
    for(int l = 0; l < propietariosXMascotas.size(); l++){
        if(propietariosXMascotas[l].getPropietario().getPropietarioID() == idPropietario && propietariosXMascotas[l].getMascota().getMascotaID() == idPet){
            parametroEliminarPropietariosDMascota(propietariosXMascotas[l].getIdPropXMascotas());
            parametroAsociar(mapPropietario[idPropietario], mapMascota[idPet]);
        }
    }
}


/*void Directorio::editarInfoPropietariosDMascota2(){
    double idPet = 0, idPropietario = 0;
    cout << "Ingrese el numero de identificacion de la mascota: ";
    cin >> idPet;
    for(int l = 0; l < propietariosXMascotas.size(); l++){
        if(propietariosXMascotas[l].getMascota().getMascotaID() == idPet){
            propietariosXMascotas[l].motrarDatosPropietariosXMascotas();
        }
    }
    cout << "Ingrese el ID del propietario que desea editar: ";
    cin >> idPropietario;
    mapPropietario[idPropietario].editarPropietario();
    for( int l = 0; l < propietariosXMascotas.size(); l++ ){
        if( propietariosXMascotas[l].getPropietario().getPropietarioID() == idPropietario ){
            propietariosXMascotas[l].getPropietario().editarPropietarioVector(mapPropietario[idPropietario]);
        }
    }
}*/

void Directorio::parametroEliminarPropietariosDMascota(double idVector){
    for( int l = 0; l < propietariosXMascotas.size(); l++ ){
        if(propietariosXMascotas[l].getIdPropXMascotas() == idVector){
            propietariosXMascotas.erase(propietariosXMascotas.begin() + l);
        }
    }
}

void Directorio::parametroAsociar(Propietario propietario, Mascota mascota){
    PropietariosXMascotas objet1(propietario, mascota, contId++);
    propietariosXMascotas.push_back(objet1);
}

void Directorio::eliminarPropietariosDMascota(){
    double idVector = 0;
    listarInfoPropietariosDMascota();
    cout << "Ingrese el id la asociacion que desea eliminar: ";
    cin >> idVector;
    for( int l = 0; l < propietariosXMascotas.size(); l++ ){
        if(propietariosXMascotas[l].getIdPropXMascotas() == idVector){
            propietariosXMascotas.erase(propietariosXMascotas.begin() + l);
        }
    }
}

void Directorio::listarInfoPropietariosDMascota(){
    double idPet = 0;
    int opcion = 0;
    cout << "Ingrese el numero de identificacion de la mascota: ";
    cin >> idPet;
    
    for(int l = 0; l < propietariosXMascotas.size(); l++){
        if(propietariosXMascotas[l].getMascota().getMascotaID() == idPet){
            propietariosXMascotas[l].motrarDatosPropietariosXMascotas();
        }
    }
}

void Directorio::listarInfoMascotasDPropietario(){
    double idProp = 0;
    int opcion = 0;
    cout << "Ingrese el numero de identificacion del propietario: ";
    cin >> idProp;
    
    for(int l = 0; l < propietariosXMascotas.size(); l++){
        if(propietariosXMascotas[l].getPropietario().getPropietarioID() == idProp){
            propietariosXMascotas[l].motrarDatosPropietariosXMascotas();
        }
    }
}

void Directorio::cambiarStatusMascota(){
    int idPet = 0;
    cout << "Ingrese el numero de identificacion de la mascota: ";
    cin >> idPet;
    mapMascota[idPet].cambiarEstadoDefuncion();
}