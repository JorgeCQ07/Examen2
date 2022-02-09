
#ifndef EXAMEN2_MENU_H
#define EXAMEN2_MENU_H

#include "Graph.h"
#include "Archivos.h"

class Menu {
private:
    int i;
    Graph *g;
    Archivos *file;
public:
    Menu();
    void menuPrincipal();
    void cargarDatos();
    void Dijkstra();
    void Kruskal();
};


#endif //EXAMEN2_MENU_H
