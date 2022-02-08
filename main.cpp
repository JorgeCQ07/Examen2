#include "Graph.h"

int main() {
    Edge e("A",0);
    Edge e1("B",1);
    Edge e2("C",2);
    Edge e3("D",3);
    Edge e4("E",4);
    Edge e5("F",5);
    Edge e6("G",6);
    Edge e7("H",7);
    Edge e8("I",8);

    int V = 9;
    Graph g(V,5);
    g.addEdge(e,e1,4);
    g.addEdge(e,e7,8);
    g.addEdge(e1,e2,8);
    g.addEdge(e1,e7,11);
    g.addEdge(e2,e3,7);
    g.addEdge(e2,e8,2);
    g.addEdge(e2,e5,4);
    g.addEdge(e3,e4,9);
    g.addEdge(e3,e5,14);
    g.addEdge(e4,e5,10);
    g.addEdge(e5,e6,2);
    g.addEdge(e6,e7,1);
    g.addEdge(e6,e8,6);
    g.addEdge(e7,e8,7);
    cout<<g.shortestPath(0);
    return 0;
}
