#ifndef DIRECTORIO_H
#define DIRECTORIO_H

#include <iostream>
#include "PropietariosXMascostas.h"
#include <iterator>
#include <vector>
#include <unordered_map>

using std::unordered_map;
using std::vector;
using std::cin;
using std::cout;
using std::string;




class Directorio{
    private:
        unordered_map<double, Propietario>::iterator i;
        unordered_map<double, Propietario> mapPropietario;
        unordered_map<double, Mascota>::iterator j;
        unordered_map<double, Mascota> mapMascota;
        vector<PropietariosXMascotas> propietariosXMascotas;
    public:
        void inicializarDatos();
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
        void llenarMascota();
        void llenarPropietario();
};

#endif