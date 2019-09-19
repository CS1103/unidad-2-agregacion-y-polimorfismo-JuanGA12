//
// Created by Juan Galvez on 2019-09-18.
//

#ifndef UNTITLED_BIBLIOTECA_H
#define UNTITLED_BIBLIOTECA_H
#include <vector>
#include <string>
#include "Volumen.h"

class Biblioteca {
private:
    int maxLibros = 0;
    int maxRevistas = 0 ;
    vector<Volumen*> coleccion;

public:
    Biblioteca()= default;
    void mostrarBiblioteca();
    void incluir(string verificar, string nombre);
    void ver_volumen();
    ~Biblioteca();
};


#endif //UNTITLED_BIBLIOTECA_H
