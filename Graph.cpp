//
// Created by adr20 on 8/2/2022.
//

#include "Graph.h"

Graph::Graph(int V, int E) {
    this->E = E;
    this->V = V;
    adj = new list<pair<Edge, int>>[V];
}

void Graph::addEdge(Edge u, Edge v, int w) {
   // edges.push_back({w, {u, v}});
    adj->push_back(make_pair(v, w));
    adj->push_back(make_pair(u,w));
}

int Graph::kruskalMST() {
    int mst_wt = 0;
    sort(edges.begin(), edges.end());
    DisjointSets ds(V);
    vector<pair<int, iPair>>::iterator it;
    for(it = edges.begin(); it != edges.end(); it++){
        int u = it->second.first;
        int v = it->second.second;

        int set_u = ds.find(u);
        int set_v = ds.find(v);
        if(set_u != set_v){
            cout<<u<<" - "<<v<<endl;
            mst_wt += it->first;
            ds.merge(set_u, set_v);
        }
    }
    return mst_wt;
}

string Graph::shortestPath(int src) {
    stringstream ss;
    set<pair<Edge, int>> setds;
    vector<Edge> dist(Edge("",V).getN(), Edge("",INF));
    setds.insert(make_pair(Edge(),src));
    dist[src] = Edge("",0);

    while(!setds.empty()) {
        pair<Edge, int> tmp = *(setds.begin());
        setds.erase(setds.begin());
        int u = tmp.second;
        list<pair<Edge, int>>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end(); i++) {
            Edge v = (*i).first;
            int weight = (*i).second;
            if (dist[v.getN()].getN() > dist[u].getN() + weight) {
                if (dist[v.getN()].getN() != INF)
                    setds.erase(setds.find(make_pair(dist[v.getN()], v.getN())));
                dist[v.getN()].setN( dist[u].getN() + weight);
                setds.insert(make_pair(dist[v.getN()], v.getN()));
            }
        }
        ss << "Vertice    Distancia desde Source\n";
        for (int i = 0; i < V; ++i)
            ss << i << "\t\t" << dist[i].getLabel() << endl;
        return ss.str();
    }
}