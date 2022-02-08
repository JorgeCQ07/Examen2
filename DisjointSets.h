//
// Created by adr20 on 8/2/2022.
//

#ifndef EXAMEN2_DISJOINTSETS_H
#define EXAMEN2_DISJOINTSETS_H

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <set>

using namespace std;

class DisjointSets {
private:
    int* parent, *rnk;
    int n;
public:
    DisjointSets(int n);
    int find(int u);
    void merge(int x, int y);
};


#endif //EXAMEN2_DISJOINTSETS_H
