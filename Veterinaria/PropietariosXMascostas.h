#ifndef PROPIETARIOSXMASCOTAS_H
#define PROPIETARIOSXMASCOTAS_H

#include "Propietario.h"
#include "Mascota.h"

class PropietariosXMascotas{
    private:
        Propietario propietario;
        Mascota mascota;
    public:
        PropietariosXMascotas(Propietario propietario, Mascota mascota);
        Propietario getPropietario();
        Mascota getMascota();
};
#endif