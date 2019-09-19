//
// Created by Juan Galvez on 2019-09-18.
//

#include "Volumen.h"
#include "Revista.h"
#include "Libro.h"
#include "Biblioteca.h"
#include <iostream>

void Biblioteca::mostrarBiblioteca() {
    for (int i = 0; i < coleccion.size(); ++i) {
        coleccion[i]->mostrar();
        std::cout<<std::endl;
    }
}

void Biblioteca::incluir(string verificar, string nombre) {
    if(verificar=="R"){
        maxRevistas++;
        Volumen *tmp = new Revista(nombre,maxRevistas+maxLibros,maxRevistas);
        coleccion.push_back(tmp);
    }
    if(verificar=="L"){
        maxLibros++;
        Volumen *tmp = new Libro(nombre,maxRevistas+maxLibros,maxLibros );
        coleccion.push_back(tmp);
    }
}

Biblioteca::~Biblioteca() {
    for (int i = 0; i < coleccion.size(); ++i) {
        delete coleccion[i];
        std::cout<<std::endl;
    }
}

void Biblioteca::ver_volumen() {
    std::cout<<"Cantidad de Volumenes: "<<maxLibros + maxRevistas;
}
