#ifndef MASCOTA_H
#define MASCOTA_H

#include <iostream>

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

        Mascota(string raza, string tipo, int edad, int peso, string tipoSangre, string nombreMascota, int mascotaID, bool status, string fechaDefuncion);
        void cambiarEstadoDifunsion();
        
};
#endif