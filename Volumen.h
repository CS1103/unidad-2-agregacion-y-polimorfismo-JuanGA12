//
// Created by Juan Galvez on 2019-09-18.
//

#ifndef UNTITLED_VOLUMEN_H
#define UNTITLED_VOLUMEN_H
#include <string>
using namespace std;

class Volumen {
protected:
    string nombre;
    int numVol;
public:
    Volumen(string nombre, int numVol):nombre{nombre}, numVol{numVol}{};
    virtual void mostrar() = 0;
    virtual ~Volumen(){};
};


#endif //UNTITLED_VOLUMEN_H
