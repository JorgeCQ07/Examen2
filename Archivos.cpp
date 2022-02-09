//
// Created by jartu on 2/8/2022.
//

#include "Archivos.h"

Archivos::Archivos(const string &file) {
    archivo = file;
    arco = nullptr;
}

void Archivos::cargar(Graph &grafo) {
    string linea;
    int peso, nodo1, nodo2;

    f.open(archivo);

    if (f.fail()) {
        exit(1);
    }
    try {
        while (!f.eof()) {
            getline(f, linea, ',');
            nodo1 = Letra_a_Num(linea[0]);
            getline(f, linea, ',');
            nodo2 = Letra_a_Num(linea[0]);
            getline(f, linea);
            peso = stoi(linea);
            grafo.addEdge(nodo1,nodo2,peso);
        }
        f.close();
    }catch(invalid_argument e){cout<<e.what()<<endl;}
}

int Archivos::Letra_a_Num(char letra) {
    switch(letra){
        case 'A':
            return 0;
            break;
        case 'B':
            return 1;
            break;
        case 'C':
            return 2;
            break;
        case 'D':
            return 3;
            break;
        case 'E':
            return 4;
            break;
        case 'F':
            return 5;
            break;
        case 'G':
            return 6;
            break;
        case 'H':
            return 7;
            break;
        case 'I':
            return 8;
            break;
        default:
            return -1;
            break;
    }
}
