//
// Created by Juan Galvez on 2019-09-18.
//

#include "Revista.h"
#include <string>
#include <iostream>
using namespace std;

Revista::Revista(string nombre, int numVol, int numRevistas):Volumen(nombre, numVol), numRevistas{numRevistas} {

}

void Revista::mostrar() {
    cout <<"Tipo: Revista | Título: "<<nombre<<" | Volumen: " <<numVol<<" | #Revista: "<<numRevistas<<endl;
}
