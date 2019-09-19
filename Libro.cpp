//
// Created by Juan Galvez on 2019-09-18.
//

#include "Libro.h"
#include <iostream>
using namespace std;

Libro::Libro(string nombre, int numVol, int numLibros):Volumen(nombre,numVol), numLibros{numLibros} {}

void Libro::mostrar() {
    cout <<"Tipo: Libro | Título: "<<nombre<<" | Volumen: " <<numVol<<" | #Libro: "<<numLibros<<endl;
}
