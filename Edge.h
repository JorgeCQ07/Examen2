//
// Created by jartu on 2/8/2022.
//

#ifndef TEST_DIJKSTRA_EDGE_H
#define TEST_DIJKSTRA_EDGE_H
#include <iostream>
using namespace std;

class Edge {
private:
    string label;
    int n;
public:
    Edge(string label = "",int n = 0);
    string getLabel()const;
    void setLabel(string label);
    int getN()const;
    void setN(int n);
};


#endif //TEST_DIJKSTRA_EDGE_H
