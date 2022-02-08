//
// Created by jartu on 2/8/2022.
//

#include "Edge.h"

Edge::Edge(string label, int n1):label(label),n(n1) {

}

string Edge::getLabel() const {
    return label;
}

void Edge::setLabel(string label) {
    this->label=label;
}

int Edge::getN() const {
    return n;
}

void Edge::setN(int n) {
    this->n=n;
}
