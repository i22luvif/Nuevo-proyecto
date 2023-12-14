#ifndef ORGANIZADOR_H
#define ORGANIZADOR_H

#include "../include/actividad.h"
#include "../include/usuario.h"

class Organizador : public Usuario {
private:
    Actividad actividad; 

public:
    // Constructor de la clase Administrador
    Organizador(string usuario, string pass) : Usuario(usuario, pass) {
        setRol("Administrador");
    }
    // Método estático para crear una nueva actividad
    static Actividad crearActividad();


    // Método estático para editar una actividad
    static void editarActividad(vector<Actividad>& actividades);

    // Método estático para eliminar una actividad
    static void eliminarActividad(vector<Actividad>& actividades);

};
int menu_organizador();


#endif