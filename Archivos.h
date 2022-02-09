//
// Created by jartu on 2/8/2022.
//

#ifndef EXAMEN2_ARCHIVOS_H
#define EXAMEN2_ARCHIVOS_H

#include "Graph.h"
#include <fstream>
#include "Edge.h"


class Archivos {
private:
    Edge *arco;
    string archivo;
    fstream f;
public:
    Archivos(const string& file);
    void cargar(Graph *grafo);
    int Letra_a_Num(char letra);
};


#endif //EXAMEN2_ARCHIVOS_H
