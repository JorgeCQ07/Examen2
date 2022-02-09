#include "Graph.h"
#include "Archivos.h"
int main() {
    int opc;
    int i = 0;
    int V = 9;
    Graph g(V,5);
    do{
        stringstream s;
        cout<<"-------------ALGORITMOS GRAFOS-------------"<<endl;
        cout<<"1)       Cargar Datos Automáticos"<<endl;
        cout<<"2)       Algoritmo Shortest Path Dijkstra"<<endl;
        cout<<"3)       Algoritmo Arbol de Expansion Minimo Kruskal"<<endl;
        cout<<"4)       Salir"<<endl;
        cout<<"Opcion: "; cin>>opc;
        switch(opc){
            case 1:
                if(i == 0){
                    Archivos file("pesos.txt");
                    file.cargar(g);
                    i++;
                }else{
                    cout<<"Los Datos Ya Han Sido Cargados"<<endl;
                }
                break;
            case 2:
                if(i == 1) {
                    cout << g.shortestPath(0);
                }else{
                    cout<<"No Hay Datos En El Grafo"<<endl;
                }
                break;
            case 3:
                if(i == 1) {
                    cout << "Arbol de Expansión mínimo usando el algortitmo Kruskal\n" << g.kruskalMST(s);
                    cout << endl << s.str();
                }else{
                    cout<<"No Hay Datos En El Grafo"<<endl;
                }
                break;
            case 4:
                break;
            default:
                cout<<"Opción Invalida"<<endl;
                break;
        }
    }while(opc != 4);

    cout<<"-------------PROGRAMA FINALIZADO-------------"<<endl;
    return 0;
}
