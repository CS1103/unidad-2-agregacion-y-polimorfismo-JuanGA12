//
// Created by Juan Galvez on 2019-09-18.
//

#ifndef UNTITLED_REVISTA_H
#define UNTITLED_REVISTA_H

#include "Volumen.h"

class Revista:public Volumen {
private:
    int numRevistas;
public:
    Revista(string nombre, int numVol, int numRevistas);
    void mostrar() override;
    ~Revista(){};
};


#endif //UNTITLED_REVISTA_H
