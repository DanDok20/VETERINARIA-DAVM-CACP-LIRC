#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>

using std::cin;
using std::cout;
using std::string;

class Mascota{
    private:
        string raza;
        string tipo;
        int edad;
        int peso;
        string tipoSangre;
        string nombreMascota;
        int mascotaID;
        bool status;
        string fechaDefuncion;
    public:
        Mascota();
        Mascota(string raza, string tipo, int edad, int peso, string tipoSangre, string nombreMascota, int mascotaID, bool status);
        void cambiarEstadoDefunsion();
        void setEstadoDefuncion(string fechaDefuncion);
        double getMascotaID();
        void mostrarDatosMascota();
};
#endif