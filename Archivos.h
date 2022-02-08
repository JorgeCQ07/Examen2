//
// Created by jartu on 2/8/2022.
//

#ifndef EXAMEN2_ARCHIVOS_H
#define EXAMEN2_ARCHIVOS_H
#include <iostream>
#include <fstream>
using  namespace std;

template <class T>
class Archivos {
private:
    T *t;
    string archivo;
    fstream f;
public:
    Archivos(const string& archivo);
    void cargar();
};


#endif //EXAMEN2_ARCHIVOS_H
