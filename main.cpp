#include "Graph.h"

int main() {
    int V = 9;
    Graph g(V,5);
    g.addEdge(0,1,10);
    g.addEdge(0,2,12);
    g.addEdge(1,2,9);
    g.addEdge(1,3,8);
    g.addEdge(2,4,3);
    g.addEdge(2,5,1);
    g.addEdge(3,4,7);
    g.addEdge(3,5,11);
    g.addEdge(3,6,8);
    g.addEdge(3,7,5);
    g.addEdge(7,5,6);
    g.addEdge(7,8,11);
    g.addEdge(8,6,2);
    g.shortestPath(0);
    cout<<"Krustal\n"<<g.kruskalMST();
    return 0;
}
