//
// Created by adr20 on 8/2/2022.
//

#ifndef EXAMEN2_GRAPH_H
#define EXAMEN2_GRAPH_H


#include "DisjointSets.h"
#include <sstream>
#define INF 0x3f3f3f3f

typedef pair<int, int> iPair;
class Graph {
private:
    int V, E;
    vector< pair<int, iPair> > edges;
    list<pair<int, int>>* adj;
public:
    Graph(int V, int E);
    void addEdge(int u, int v, int w);
    int kruskalMST(stringstream& s);
    string shortestPath(int s);
};


#endif //EXAMEN2_GRAPH_H
