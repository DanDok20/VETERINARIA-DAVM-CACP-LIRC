#ifndef PROPIETARIOSXMASCOTAS_H
#define PROPIETARIOSXMASCOTAS_H

#include "Propietario.h"
#include "Mascota.h"

class PropietariosXMascotas{
    private:
        Propietario propietario;
        Mascota mascota;
        int idPropXMascotas;
    public:
        PropietariosXMascotas();
        PropietariosXMascotas(Propietario propietario, Mascota mascota, int idPropXMascotas);
        Propietario getPropietario();
        Mascota getMascota();
        void motrarDatosPropietariosXMascotas();
        double getIdPropXMascotas();
};
#endif