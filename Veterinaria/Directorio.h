#ifndef DIRECTORIO_H
#define DIRECTORIO_H

#include <iostream>
#include "PropietariosXMascostas.h"
#include <iterator>
#include <map>

class Directorio{
    private:
        map<int, PropietariosXMascostas> propietariosXMascostas;

    public:
        void propietariosRegistrados();
        void informacionPropietarios();
        void informacionMascotas();
        void propietariosMascota();
        void mascotasPropietario();
        void agregarMascotaAPropietario();
        void agregarPropietarioAMascota();
        void editarPropietariosDMascota();
        void eliminarPropietariosDMascota();
        void listarPropietariosDMascota();
        void eliminarPropietarioDMascota();
};

#endif