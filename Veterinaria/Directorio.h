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
        int contId;
        unordered_map<double, Propietario>::iterator i;
        unordered_map<double, Propietario> mapPropietario;
        unordered_map<double, Mascota>::iterator j;
        unordered_map<double, Mascota> mapMascota;
        vector<PropietariosXMascotas> propietariosXMascotas;
    public:
        Directorio();
        int getContId();

        void inicializarDatos();
        void cantidadPropietariosRegistrados();
        void informacionPropietariosRegistrados();
        void informacionMascotasRegistradas();
        void asociarPropietarioMascotas();
        void asociarMascotaPropietarios();
        void agregarMascota();
        void agregarPropietario();
        void mostrarDirectorio();
        void cambiarStatusMascota();
        void editarInfoPropietarioDMascota();
        void listarInfoPropietariosDMascota();
        void listarInfoMascotasDPropietario();
        void eliminarPropietariosDMascota();

        void parametroEliminarPropietariosDMascota(double idVector);
        void parametroAsociar(Propietario propietario, Mascota mascota);

        //void editarInfoPropietariosDMascota2();
};

#endif