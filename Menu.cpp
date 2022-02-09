//
// Created by adr20 on 9/2/2022.
//

#include "Menu.h"

Menu::Menu() {
    i = 0;
    int V = 9;
    g = new Graph(V, 5);
    file = new Archivos("pesos.txt");
}

void Menu::menuPrincipal() {
    int opc;
    do{
        cout<<"-------------ALGORITMOS GRAFOS-------------"<<endl;
        cout<<"1)       Cargar Datos Automaticos"<<endl;
        cout<<"2)       Algoritmo Shortest Path Dijkstra"<<endl;
        cout<<"3)       Algoritmo Arbol de Expansion Minimo Kruskal"<<endl;
        cout<<"4)       Salir"<<endl;
        cout<<"Opcion: "; cin>>opc;
        switch(opc){
            case 1:
                cargarDatos();
                break;
            case 2:
                Dijkstra();
                break;
            case 3:
                Kruskal();
                break;
            case 4:
                break;
            default:
                cout<<"Opcion Invalida"<<endl;
                break;
        }
    }while(opc != 4);

    cout<<"-------------PROGRAMA FINALIZADO-------------"<<endl;
}

void Menu::cargarDatos() {
    if(i == 0){
        file->cargar(g);
        cout<<"Los Datos Han Sido Cargados"<<endl;
        i++;
    }else{
        cout<<"Los Datos Ya Han Sido Cargados"<<endl;
    }
}

void Menu::Dijkstra() {
    if(i == 1) {
        cout << g->shortestPath(0);
    }else{
        cout<<"No Hay Datos En El Grafo"<<endl;
    }
}

void Menu::Kruskal() {
    stringstream s;
    if(i == 1) {
        cout << "Arbol de Expansion Minimo Usando el Algortitmo Kruskal\n" << g->kruskalMST(s);
        cout << endl << s.str();
    }else{
        cout<<"No Hay Datos En El Grafo"<<endl;
    }
}
