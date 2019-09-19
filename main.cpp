#include <iostream>
#include "Biblioteca.h"
#include "Revista.h"
#include "Libro.h"
#include "Volumen.h"

int main() {
    Biblioteca biblio;
    biblio.incluir("L","Templado");
    biblio.incluir("R","Somos");
    biblio.incluir("R","Forbes");
    biblio.mostrarBiblioteca();
    biblio.ver_volumen();
}