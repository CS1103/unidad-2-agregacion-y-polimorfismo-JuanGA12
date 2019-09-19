//
// Created by Juan Galvez on 2019-09-18.
//

#ifndef UNTITLED_LIBRO_H
#define UNTITLED_LIBRO_H

#include "Volumen.h"

class Libro: public Volumen {
private:
    int numLibros;
public:
    Libro(string nombre, int numVol, int numLibros);
    void mostrar() override;
    ~Libro(){};
};


#endif //UNTITLED_LIBRO_H
